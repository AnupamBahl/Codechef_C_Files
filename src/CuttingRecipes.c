#include<stdio.h>

int main()
{
	int len,curlen,arr[50],min,i,j;
	scanf("%d\n",&len);
	while(len--)
	{
		min=1000;
		scanf("%d ",&curlen);
		for(i=0;i<curlen;i++)
		{
			scanf("%d ",&arr[i]);
			if(arr[i]<min)
				min=arr[i];
		}
		for(j=min;j>1;j--)
		{
			for(i=0;i<curlen;i++)
			{
				if(arr[i]%j!=0)
					break;
			}
			if(i==curlen)
			{
				for(i=0;i<curlen;i++)
					arr[i]/=j;
				break;
			}
		}
		for(i=0;i<curlen;i++)
			printf("%d ",arr[i]);
		printf("\n");
	}
	return 0;
}