#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k=65;
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		 printf("%c ",k);
		 k++;
	    }
	    printf("\n");
    }
		getch();
}
