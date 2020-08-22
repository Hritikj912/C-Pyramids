#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k,l;
	char ch;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			ch='A';
		for(j=1;j<=n+1-i;i++)
		{
			for(l=0;l<i-1;l++)
			{
			printf(" ");
		    }
			j<n?k++:k--;
			printf("%c",ch);
				ch='A';
			printf("\n");
		}

	}
getch();
}
