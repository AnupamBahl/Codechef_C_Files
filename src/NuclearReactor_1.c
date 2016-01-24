#include<stdio.h>
int buffer[100];

int main()
{
	int N,K,i;
	long int A;
	scanf("%ld %d %d", &A, &N, &K);
	while(A)
	{
		for(i=0;i<K;i++)
		{
			if(buffer[i]==N)
			{
				buffer[i]=0;
				continue;
			}
			break;
		}
		
		if(i==0)
		{
			if(A>=(N-buffer[i]))
			{	
				A = A - (N-buffer[i]);
				buffer[i] = N;
			}
			else
			{
				buffer[i]+=A;
				A=0;
			}
		}
		else
		{
			buffer[i]++;
			A--;
		}
	}
	for(i=0;i<K;i++)
		printf("%d ",buffer[i]);
	return 0;
}