#include<stdio.h>

int main()
{
	int N,K,i;
	int buffer[100];
	long int A;
	scanf("%ld %d %d", &A, &N, &K);
	
	N++;
	for(i=0;i<K;i++)
	{
		buffer[i]=(int)A%N;
		A/=N;
	}	

	for(i=0;i<K;i++)
		printf("%d ", buffer[i]);
	return 0;
}
		
