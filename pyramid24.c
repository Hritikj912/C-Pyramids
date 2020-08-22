#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=65;i<=n+64;i++)
    {
    	for(j=n+65-i;j>=1;j--)
    	{
    		printf("%c",i);
		}
		printf("\n");
	}
	getch();
}
