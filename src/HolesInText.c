#include<stdio.h>
#include<malloc.h>
#define SIZE 4100

int main()
{
	char *arr;
	int count, len;
	
	arr = (char*) malloc(sizeof(char) * SIZE);
	scanf("%d\n", &len);
	
	fread(arr,sizeof(char),SIZE,stdin);
	while(*arr != EOF)
	{
		count = 0;
		while(*arr != '\n')
		{
			if(*arr == EOF)
			{
				printf("%d", count);
				return 0;
			}
			switch(*arr)
			{
			case 'B':
				count += 2;
				break;
			case 'A':
			case 'D':
			case 'R':
			case 'O':
			case 'P':
			case 'Q':
				count += 1;
				break;
			}
			arr++;
		}
		printf("%d\n", count);
		arr++;
	}
	return 0;
}