#include<stdio.h>
#define SIZE 60000

int main()
{
	char buffer[SIZE];
	char expressQue[400], charQue[400];
	int len,i,expLoc=0,charLoc=0;
	scanf("%d\n",&len);
	
	charQue[charLoc]='(';

	len = fread(buffer,sizeof(char),SIZE,stdin);
	for(i=0;i<len;i++)
	{
		if(buffer[i]>='a'&&buffer[i]<='z')
		{
			expressQue[expLoc]=buffer[i];
			expLoc++;
		}
		else if(buffer[i]=='(')
		{
			charLoc++;
			charQue[charLoc]=buffer[i];
		}
		else if(buffer[i]==')')
		{
			while(charQue[charLoc]!='(')
			{
				expressQue[expLoc]=charQue[charLoc];
				expLoc++;
				charLoc--;
			}
			charLoc--;
		}
		else if(buffer[i]=='\n')
		{
			expressQue[expLoc]='\n';
			fwrite(expressQue,sizeof(char),expLoc+1,stdout);
			charLoc=0;
			expLoc=0;
		}
		else
		{
			charLoc++;
			charQue[charLoc]=buffer[i];
		}
	}
	expressQue[expLoc]='\n';
	fwrite(expressQue,sizeof(char),expLoc+1,stdout);
	
	return 0;
}