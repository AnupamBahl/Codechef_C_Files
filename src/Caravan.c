#include<stdio.h>

int main()
{
	int T, N, i, num, mBuffer[10000],loc,count,min;
	char buffer[200000];
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d\n",&N);
		gets(buffer);
		i=0;
		count=0;
		loc=0;
		while(N--)
		{	
			num = 0;
			for(;(buffer[i]!=' ')&&(buffer[i]!='\0');i++)
				num=num*10 + buffer[i]-'0';
			i++;
			mBuffer[loc]=num;
			loc++;	
		}
		min=mBuffer[0];
		for(i=0;i<loc;i++)
		{
			if(mBuffer[i]<=min)
			{
				count++;
				min=mBuffer[i];
			}
		}
		printf("%d\n",count);
	}
	return 0;
}