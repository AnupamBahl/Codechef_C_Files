#include<stdio.h>
#include<conio.h>

int main()
{
	int num, i, tempNum, j;
	char buffer[200];
	scanf("%d\n", &num);
	
	for(i=num;;i++)
	{
		for(tempNum=i/2;tempNum>1;tempNum--)
		{
			if(i%tempNum==0)
				break;
		}
		if(tempNum==1)
		{
			for(j=0,tempNum=i;tempNum>0;j++)
			{
				buffer[j]=tempNum%10+'0';
				tempNum/=10;
			}
			num=j;
			for(tempNum=0,j=0;j<num;j++)
			{
				tempNum=tempNum*10 + buffer[j]-'0';
			}
			if(tempNum==i)
			{
				printf("%d",tempNum);
				return 1;
			}
		}
	}
	return 0;
}
				