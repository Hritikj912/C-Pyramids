#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,m,b;
    for(i=1;i<=5;i++)
    {
    	for(j=1;j<=5-i;j++)
    	{
    		printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
	printf("\n");
    }
    for(l=1;l<=4;l++)
    {
    	for(m=1;m<=l;m++)
    	{
    		printf(" ");
		}
		for(b=1;b<=5-l;b++)
		{
			printf("* ");
		}
	    printf("\n");
    }
    getch();
}
