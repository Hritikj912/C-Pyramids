#include<stdio.h>
void main()
{ int n,i,j,k;
	printf("Enter no. of lines\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		printf("%c",n-i+65);
		for(k=2*i-3;k>=1;k--)
		{
			printf(" ");
		}
		if(i==1)
		{
			printf(" ");
		}
		else
		printf("%c",n-i+65);
				printf("\n");
	}
}

