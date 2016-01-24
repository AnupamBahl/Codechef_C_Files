#include<stdio.h>

int main()
{
	int T,N,K,A[100];
	int i,count;
	scanf("%d\n",&T);
	while(T--)
	{
		count=0;
		scanf("%d\n",&N);
		for(i=0;i<N;i++)
			scanf("%d ",&A[i]);
		scanf("%d\n",&K);
		K-=1;
		for(i=0;i<N;i++)
		{
			if(A[K]>A[i])
				count++;
		}
		count+=1;
		printf("%d\n",count);
	}
	return 0;
}