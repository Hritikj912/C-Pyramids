#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	if(n%2==0)
	{
for(i=1;i<=n/2;i++)
{
	for(j=n/2-i;j>0;j--)
	{
		printf(" ");
	}
	for(k=n/2;k>=n/2-i+1;k--)
	{
		printf("%d",n/2-i);
	}
	printf("\n");
}
for(i=1;i<=n/2;i++)
{
	for(k=1;k<i;k++)
	{
		printf(" ");
	}
	 for(j=n/2;j>=i;j--)
	{
		printf("%d",i-1);
	}
	printf("\n");
}
}
else
	{
for(i=1;i<=n/2;i++)
{
	for(j=n/2-i;j>=0;j--)
	{
		printf(" ");
	}
	for(k=n/2;k>=n/2-i+1;k--)
	{
		printf("%d",n/2-i+1);
	}
	printf("\n");
}
for(i=0;i<=n/2;i++)
{
	for(k=1;k<=i;k++)
	{
		printf(" ");
	}
	 for(j=n/2;j>=i;j--)
	{
		printf("%d",i);
	}
	printf("\n");
}
}
}
