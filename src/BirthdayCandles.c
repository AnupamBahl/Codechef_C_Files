#include<stdio.h>

int main()
{
	int num, buffer[11],i,min, minLoc,temp;
	scanf("%d\n",&num);
	while(num--)
	{
		min=10;
		for(i=0;i<10;i++)
		{
			scanf("%d ",&buffer[i]);
			if(buffer[i]<min)
				min=buffer[i];
			buffer[10]=buffer[0];
		}
		for(i=1;i<=10;i++)
		{
			if(buffer[i]==min)
			{
				minLoc=i;
				break;
			}
		}
		temp=minLoc;
		if(minLoc!=10)
		{
			for(i=0;i<min;i++)
				temp=(temp*10)+minLoc;
		}
		else
			for(i=0,temp=10;i<min;i++)
				temp*=10;
		printf("%d\n",temp);
		
	}
	return 0;
}