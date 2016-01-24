#include<stdio.h>
#define SIZE 100000

int main()
{
	long int num=0;
	char buffer[SIZE];
	int t,i,zeroes=0,temp=5;
	
	scanf("%d\n", &t);
	while((t=fread(buffer,sizeof(char),SIZE,stdin))!=0)
	{
		for(i=0;i<t;i++)
		{
			if(buffer[i]=='\n')
			{
				while(num/temp != 0)
				{
					zeroes += (int)num/temp;
					temp *= 5;
				}
				printf("%d\n",zeroes);
				zeroes=num=0;
				temp = 5;
			}
			else
				num = num*10+(buffer[i]-'0');
		}
	}
	return 0;
}