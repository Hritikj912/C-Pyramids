#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n-i;j++)
    	{
    		printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%c ",i+64);
		}
		printf("\n");
	}
	getch();
}
