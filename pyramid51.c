#include<stdio.h>
int main()
{
	int i,j,k,z,l,n;
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
			z=65+k;
			printf("%c",z);
			z--;
		}
		for(l=1;l<n-i+1;l++)
		{
			z=65+l;
			printf("%c",z);
			z--;
		}
		 printf("\n");
	}
	
}

