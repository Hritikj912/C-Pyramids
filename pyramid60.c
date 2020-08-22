#include <stdio.h>
 int main() 
 { int i,j,n;
  printf("Enter no. of lines\n");
  scanf("%d",&n);
  for(i=n/2;i>0;i--)
{
	for(j=i;j<=n/2;j++)
	printf("%d",j);
	printf("\n");
}
for(i=0;i<=n/2;i++)
{
	for(j=i;j<=n/2;j++)
	printf("%d",j);
	printf("\n");
}			
}

