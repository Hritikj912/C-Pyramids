#include <stdio.h>
 int main() 
 { int i,j,n;
  printf("Enter no. of lines\n");
  scanf("%d",&n);
for(i=n/2;i>=0;i--)
{
	for(j=n/2;j>=i;j--)
	printf("%d",j);
	printf("\n");
}
for(i=n/2;i>=1;i--)
{
	for(j=n/2;j>=n/2+1-i;j--)
	printf("%d",j);
	printf("\n");
}
}

