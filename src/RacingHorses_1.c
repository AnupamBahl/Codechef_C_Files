#include<stdio.h>

int main()
{
	int T,N,S[5000],min,temp,i,j,loc;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d\n",&N);
		min = 999999999;
		for(i=0;i<N;i++)
		{	
			loc=0;
			scanf("%d ",&temp);
			while(temp>S[loc]&&loc<i)
				loc++;	
			for(j=i;j>loc;j--)
				S[j]=S[j-1];
			S[loc]=temp;
		}
		
		for(i=0;i<N-1;i++)
		{
			temp = S[i]-S[i+1];
			if(temp<0)
				temp=-temp;
			if(temp<min)
				min=temp;
			if(temp==0)
				break;
		}
		printf("%d\n",min);
	}
	return 0;
}