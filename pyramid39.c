#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k=1;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=65;i<=n+64;i++)
    {
    	for(k=65;k<i;k++)
    	{
    		printf(" ");
		}
    	for(j=n+64;j>=i;j--)
    	{
    		printf("%c",j);
		}
		printf("\n");
	}
	getch();
}
