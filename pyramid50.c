#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter no. of lines\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n-1;j>=n+1-i;j--)
		{
			 printf(" ");
		}
		
		for(k=n-i;k>=0;k--)
		{
			printf("%d",k);
		}
		for(l=1;l<n-i+1;l++)
		{
			printf("%d",l);
		}
		 printf("\n");
	}
	
}

