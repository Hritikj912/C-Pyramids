#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=n-i;j>=1;j--)
    	{
    		printf(" ");
		}
		for(k=n;k>=n+1-i;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}
