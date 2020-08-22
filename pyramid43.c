#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,z=65,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("%c",z);
		}
		z=z+1;
		printf("\n");
	}
    
    
}
