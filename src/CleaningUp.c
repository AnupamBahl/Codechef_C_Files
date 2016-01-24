#include<stdio.h>

int main()
{
	int len,total,curlen,i,j,buffer[1000],chefBuffer[1000],workerBuffer[1000];
	int temp,loc,count,cheflen,workerlen;
	scanf("%d\n",&len);
	while(len--)
	{
		scanf("%d %d\n",&total,&curlen);
		count=0;
		buffer[0]='\0';
		for(i=0;i<curlen;i++)
		{
			scanf("%d ",&temp);
			for(j=0;j<i;j++)
				if(buffer[j]>temp)
					break;
			loc=j;
			for(j=i;j>loc;j--)
				buffer[j]=buffer[j-1];
			buffer[loc]=temp;
		}
		for(i=0;i<curlen;i++)
			printf("%d ",buffer[i]);
		printf("\n...........\n");
		loc=0;
		for(i=0,cheflen=0,workerlen=0;i<total;i++)
		{
			if(i+1==buffer[loc])
			{
				printf("&");
				loc++;
				continue;
			}
			if(count)
			{
				workerBuffer[workerlen]=i+1;
				workerlen++;
				count=0;
			}
			else
			{
				chefBuffer[cheflen]=i+1;
				cheflen++;
				count=1;
			}
				
		}

		for(i=0;i<cheflen;i++)
			printf("%d ",chefBuffer[i]);
		printf("\n");
		for(i=0;i<workerlen;i++)
			printf("%d ",workerBuffer[i]);
		printf("\n\n");
	}
	return 0;
}
			