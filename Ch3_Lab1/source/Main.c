#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:");
	scanf_s("%c", &AddChoice);
	printf("1+2+....+n=?請輸入n=?");
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
		printf("選擇錯誤\n");
		return -1;
		fflush(stdin);
	}
	printf("總合為%d\n", Sum);
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