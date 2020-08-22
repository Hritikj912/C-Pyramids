#include<stdio.h>
int main()
{
	int i,j,k,z,l,n;
	printf("Enter no. of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			 printf(" ");
		}
		z=65;
		for(k=1;k<=i;k++)
		{
			printf("%c",z);
			z++;
		}
		z=65;
		for(k=i;k>1;k--)
		{
			printf("%c",z+k-2);
		}

		 printf("\n");
	}
	
}

