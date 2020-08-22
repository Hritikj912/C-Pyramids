#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=65;i<n+65;i++)
    {
    	for(j=64+n;j>i;j--)
    	{
    		printf(" ");
		}
		for(k=65;k<=i;k++)
		{
			printf("%c",k);
		}
		printf("\n");
	}
	getch();
}
