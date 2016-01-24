#include<stdio.h>
#include<malloc.h>
#define SIZE 100000000
int main()
{
	int buffer[50000],answer[150000],final[150000];
	int N1,N2,N3,i,loc,ansloc,finalloc,temp;
	char *buff = (char*)malloc(SIZE);
	scanf("%d %d %d\n",&N1,&N2,&N3);
	
	fread(buff,sizeof(char),SIZE,stdin);
	
	for(i=0;i<N1;i++)
	{
		buffer[i]=0;
		while(*buff != '\n')
		{
			buffer[i] = buffer[i]*10 + *buff-'0';
			buff++;
		}
		buff++;		
	}
	
	loc=0;
	ansloc=0;
	for(i=0;i<N2;i++)
	{
		temp=0;
		while(*buff != '\n')
		{
			temp = temp*10 + *buff-'0';
			buff++;
		}
		buff++;
		while(loc<N1&&buffer[loc]<temp)
		{			
			answer[ansloc]=buffer[loc];
			loc++;
			ansloc++;
		}
		answer[ansloc]=temp;
		ansloc++;
	}
	while(loc<N1)
	{
		answer[ansloc] = buffer[loc];
		loc++;
		ansloc++;
	}
	finalloc=0;
	loc=0;
	for(i=0;i<N3;i++)
	{
		temp=0;
		while(*buff != '\n' && *buff!='\0')
		{
			temp = temp*10 + *buff-'0';
			buff++;
		}
		buff++;
		while(loc<ansloc&&answer[loc]<temp)
		{
			final[finalloc]=answer[loc];
			finalloc++;
			loc++;
		}
		final[finalloc]=temp;
		finalloc++;
	}
	while(loc<ansloc)
	{
		final[finalloc]=answer[loc];
		finalloc++;
		loc++;
	}
	ansloc=0;
	
	for(i=0,loc=0;loc<finalloc;loc++)
	{
		if(ansloc>=1)
		{
			answer[i]=final[loc-1];
			ansloc=0;
			i++;
		}
		while(loc<finalloc-1 && final[loc+1]==final[loc])
		{
			loc++;
			ansloc++;
		}
	}
	printf("%d\n",i);
	for(loc=0;loc<i;loc++)
		printf("%d\n",answer[loc]);
	return 0;	
}