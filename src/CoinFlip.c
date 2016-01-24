#include<stdio.h>

int main()
{
	int T,G,N,I,Q;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d\n",&G);
		while(G--)
		{
			scanf("%d %d %d\n",&I,&N,&Q);
			if(N%2==0)
				printf("%d\n",N/2);
			else if(I==Q)
				printf("%d\n",N/2);
			else
				printf("%d\n",(N/2) + 1);
			
		}
	}
	return 0;
}