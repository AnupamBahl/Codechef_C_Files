//gumma-salt
#include<stdio.h>

int main()
{
	int N,X,T,i;
	int per,sum,min,temp;
	scanf("%d\n",&T);
	while(T--)
	{
		min=101;
		sum=0;
		scanf("%d %d\n",&N,&X);
		for(i=0;i<N;i++)
		{
			scanf("%d ",&temp);
			sum+=temp;
			if(temp<min)
				min=temp;
		}
		per = sum%X;
		(min<=per)?printf("-1\n"):printf("%d\n",sum/X);
				
	}
	return 0;
}	
