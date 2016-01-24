#include<stdio.h>

int main()
{
	long int num;
	int len;
	scanf("%d\n", &len);
	while(len--)
	{
		scanf("%d\n", &num);
		num = num/2;
		num++;
		printf("%d\n",num);
	}
	return 0;
}