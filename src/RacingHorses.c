#include<stdio.h>

int main()
{
	int T,N,S[5000],i,j, min,temp;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d\n",&N);
		min = 999999999;
		for(i=0;i<N;i++)
			scanf("%d ",&S[i]);
		for(i=0;i<N-1;i++)
		{
			for(j=i+1;j<N;j++)
			{
				temp=S[i]-S[j];
				if(temp<0)
					temp=-temp;
				if(temp<min)
				{
					min=temp;
					if(min==0)
						break;
				}
			}
			if(min==0)
				break;
		}
		printf("%d\n", min);
				
	}	
	return 0;
}