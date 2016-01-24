#include<stdio.h>
int par[100];
void movPar(int,int,int);
int main()
{
	int N,K,i;
	long int A;
	scanf("%ld %d %d", &A, &N, &K);
	if(N==0)
	{
		for(i=0;i<K;i++)
			printf("0 ");
		return 0;
	}	
	while(A--)
	{
		movPar(0, N, K);
	}
	for(i=0;i<K;i++)
		printf("%d ",par[i]);
	return 0;
}

void movPar(int loc, int lim, int tot)
{
	if(loc==tot)
		return;
	par[loc]+=1;
	if(par[loc]<=lim)
		return;
	else if(par[loc]>lim)
	{
		par[loc]=0;
		movPar(loc+1,lim,tot);
	}
	return;
}

