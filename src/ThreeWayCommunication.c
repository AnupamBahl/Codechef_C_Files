#include<stdio.h>

int main()
{
	int T,R,xone,xtwo,xthree,yone,ytwo,ythree,i;
	int done,dtwo,dthree;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d\n",&R);
		R*=R;
		scanf("%d %d\n",&xone,&yone);
		scanf("%d %d\n",&xtwo,&ytwo);
		scanf("%d %d\n",&xthree,&ythree);
		done = ((xone-xtwo)*(xone-xtwo)) + ((yone-ytwo)*(yone-ytwo));
		dtwo = ((xone-xthree)*(xone-xthree)) +  ((yone-ythree)*(yone-ythree));
		dthree = ((xtwo-xthree)*(xtwo-xthree)) + ((ytwo-ythree)*(ytwo-ythree));
		if(done<=R&&dtwo<=R || done<=R&&dthree<=R || dtwo<=R&&dthree<=R)
		{
			printf("yes\n");
		}
		else
			printf("no\n");
			
	}
	return 0;
}
