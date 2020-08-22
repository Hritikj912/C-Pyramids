#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=65;i<65+n;i++)
    {
    	for(j=n+64;j>i;j--)
    	{
    		printf(" ");
		}
		for(k=65;k<=i;k++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	getch();
}
