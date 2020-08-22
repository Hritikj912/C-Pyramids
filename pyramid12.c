#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k,l;
	char ch;
	printf("ENTER NUMBER OF ELEMENTS\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	{
		ch='A';
		for(j=n-i;j>=1;j--)
		{
			printf("%c",ch);
			ch++;
		}
	}
		for(k=-1;k<=2*i-2;k=k+1)
		{
			printf(" ");
		}
		for(l=n-i;l>=1;l--)
		{
		    ch--;
			printf("%c",ch);
		}
	printf("\n");
}
    getch();
}
