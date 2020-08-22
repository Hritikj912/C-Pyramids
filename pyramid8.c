#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k=1;
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%2==1)
		printf("1");
		else
		printf("0");
	    }
	printf("\n");
	}
	
	    getch();
}
