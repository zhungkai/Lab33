#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��:");
	scanf_s("%c", &AddChoice);
	printf("1+2+....+n=?�п�Jn=?");
	scanf_s("%d",&n);
	

	switch (AddChoice)
	{
	case '0':
		Sum = Odd(n);
		break;
		fflush(stdin);
	case 'E':
		Sum = Even(n);
		fflush(stdin);
	case 'I':
		Sum = TotalSum(n);
		break;
		fflush(stdin);
	default:
		printf("��ܿ��~\n");
		return -1;
		fflush(stdin);
	}
	printf("�`�X��%d\n", Sum);
	system("pause");
	return 0;
}
int Odd(int U)
{
	int i,Total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			Total = Total + i;
	return Total;

}
int Even(int U)
{
	int i, Total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			Total = Total + i;
	return Total;
}
int TotalSum(int U)
{
	return Odd(U) + Even(U);
}