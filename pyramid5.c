#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	char ch;
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ch='A';
		for(j=1;j<=i;j++)
		{
		 printf("%c",ch);
		 ch++;
	    }
	    printf("\n");
    }
		getch();
}
