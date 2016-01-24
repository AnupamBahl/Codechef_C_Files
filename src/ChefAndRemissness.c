#include<stdio.h>

int main()
{
	int T,A,B;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d %d\n",&A,&B);
		if(A>B)
			printf("%d %d\n",A,A+B);
		else
			printf("%d %d\n",B,A+B);
	}
	return 0;
}