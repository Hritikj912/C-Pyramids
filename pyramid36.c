#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
	for(k=n;k>i;k--)
	{
		printf(" ");
	}
    	for(j=1;j<=i;j++)
    	{
    		printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
