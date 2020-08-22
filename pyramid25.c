#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=65;j<=n+65-i;j++)
    	{
    		printf("%c",j);
		}
		printf("\n");
	}
	getch();
}
