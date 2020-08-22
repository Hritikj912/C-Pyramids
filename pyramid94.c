#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n,l,m,b;
    printf("Enter no. of lines\n");
    scanf("%d",&n);
    if(n%2==0)
    {
	
    for(i=1;i<=(n/2);i++)
    {
    	for(j=1;j<=(n/2)-i;j++)
    	{
    		printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
	printf("\n");
    }
    for(l=1;l<=(n/2);l++)
    {
    	for(m=1;m<l;m++)
    	{
    		printf(" ");
		}
		for(b=l;b<=(n/2);b++)
		{
			printf("%d ",b);
		}
	    printf("\n");
    }
   }
     else
    {
	 for(i=1;i<=(n/2)+1;i++)
    {
    	for(j=1;j<=(n/2)+1-i;j++)
    	{
    		printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
	printf("\n");
    }
    for(l=1;l<=(n/2);l++)
    {
    	for(m=1;m<=l;m++)
    	{
    		printf(" ");
		}
		for(b=l+1;b<=(n/2)+1;b++)
		{
			printf("%d ",b);
		}
	    printf("\n");
    }
  }
   getch();
}
