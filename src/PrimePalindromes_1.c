#include<stdio.h>

int main()
{
	int num, revNum, temp, i;
	scanf("%d",&num);
	while(1)
	{	
		temp=num;
		revNum=0;
		while(temp!=0)
		{
			revNum = revNum*10 + temp%10;
			temp/=10;
		}
		if(revNum==num)
		{
			temp=num/2;
			for(i=2;i<=temp;i++)
			{
				if(num%i==0)
					break;
			}
			if(i>temp)
			{
				printf("%d",num);
				return 0;
			}
		}
		num++;
	}		

	return 0;
}