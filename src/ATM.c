#include<stdio.h>

int main()
{
	short int withdrawAmount;
	float balance, newBalance;

	scanf("%d %f", &withdrawAmount, &balance);
	newBalance = balance - withdrawAmount - 0.5;

	if(newBalance >= 0 && withdrawAmount%5 == 0)
		printf("%.2f", newBalance);
	else
		printf("%.2f", balance);
	return 0;
}