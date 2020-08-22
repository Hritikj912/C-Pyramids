#include<stdio.h>
void main()
{ int n,i,j,k;
	printf("Enter no. of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		printf("%c",i+64);
		for(k=1;k<2*i-2;k++)
		{
			printf(" ");
		}
		if(i==1)
		{
			 printf(" ");

		}
		else
		printf("%c",i+64);
				printf("\n");
	}
}
