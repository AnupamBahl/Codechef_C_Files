#include<stdio.h>

int findPrime(int T)
{
	while(T>1)
	{
		T--;
		for(int i=T-1; i > 1; i--){
			if(T&i == 0)
				break;
		}
		if(i == 1)
			return T;
	}
	return T;
}

int main()
{
	int N, T, count,prime;
	scanf("%d\n%d\n",&N,&T);
	while(N--)
	{
		count = 0;
		while(T > 1)
		{
			prime=findPrime(T)
			T-=prime;
			count++;
		}
		if(count%2 == 0)
			printf("ALICE\n");
		else
			printf("BOB");
	}
}