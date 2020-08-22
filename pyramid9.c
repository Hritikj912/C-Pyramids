#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k=1;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=n;j>=i;j--)
    	{
    		printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
