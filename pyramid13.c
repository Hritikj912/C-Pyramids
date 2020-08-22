#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	  for(i=1;i<=(n/2)+1;i++)
	  {
	  	for(j=1;j<=(n/2)+1-i;j++)
	  	printf(" ");
	  	for(k=1;k<=i;k++)
	  	printf("%d",k);	
	  printf("\n");
}
	  for(i=1;i<=(n/2);i++)
	  {
	  	for(j=1;j<=i;j++)
	  	printf(" ");
	  	for(k=1;k<=(n/2)+1-i;k++)
	  	printf("%d",k);	
	  printf("\n");
}
	getch();
}
