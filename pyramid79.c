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
	for(k=i;k>=1;k--)
	{
		printf("%d",k);
	}
	printf("\n");
}
for(i=1;i<=n/2;i++)
{
	for(k=1;k<i;k++)
	{
		printf(" ");
	}
	 for(j=n/2-i+1;j>=1;j--)
	{
		printf("%d",j);
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
	for(k=i;k>=1;k--)
	{
		printf("%d",k);
	}
	printf("\n");
}
for(i=1;i<=n/2+1;i++)
{
	for(k=1;k<i;k++)
	{
		printf(" ");
	}
	 for(j=n/2-i+2;j>=1;j--)
	{
		printf("%d",j);
	}
	printf("\n");
}
}
}

