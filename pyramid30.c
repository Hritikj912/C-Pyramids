#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k=65;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=64+n;i>=65;i--)
    {
    	for(j=65;j<=i;j++)
    	{
    		printf("%c",i);
		}
		printf("\n");
	}
	getch();
}
