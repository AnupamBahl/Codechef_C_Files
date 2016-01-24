#include<stdio.h>
int A[10020];

int main()
{
	int i, T, N, max, temp, loc;
	scanf("%d\n",&T);
	while(T--)
	{
		max=0;
		loc=0;
		scanf("%d\n",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d ",&temp);
			A[temp]++;
			if(A[temp]>max)
			{
				max=A[temp];
				loc=temp;
			}
			else if(A[temp]==max && temp<loc)
			{
				loc=temp;
			}
		}
		printf("%d %d\n",loc,max);
		for(i=1;i<=10010;i++)
			A[i]=0;
	}
	return 0;
}
	