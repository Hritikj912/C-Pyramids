#include <stdio.h>
 int main() 
 { int i,j,n;
  printf("Enter no. of lines\n");
  scanf("%d",&n);
  if(n%2==1)
  {
  for(i=n/2+1;i>0;i--)
{
	for(j=i;j<=n/2+1;j++)
	printf("%d",j);
	printf("\n");
}
for(i=1;i<=n/2;i++)
{
	for(j=i+1;j<=n/2+1;j++)
	printf("%d",j);
	printf("\n");
}
}
if(n%2==0)
{
	  for(i=n/2+1;i>0;i--)
{
	for(j=i;j<=n/2;j++)
	printf("%d",j);
	printf("\n");
}
for(i=1;i<=n/2;i++)
{
	for(j=i;j<=n/2;j++)
	printf("%d",j);
	printf("\n");
}
}
}

