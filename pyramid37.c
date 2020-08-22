#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=n+64;i>=65;i--)
    {
	for(k=n+64;k>i;k--)
	{
		printf(" ");
	}
    	for(j=65;j<=i;j++)
    	{
    		printf("%c",i);
		}
		printf("\n");
	}
	getch();
}
