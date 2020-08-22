#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k=2;
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;)
		{
			if(prime(k)>0)
		 {
		 	printf("%d ",prime(k));
		 	j++;
		 }
		 k++;
	    }
	    printf("\n");
    }
		getch();
}
int prime(int k)
{int flag=0,i;
	for(i=2;i<k;i++)
	{
		if(k%i==0)
		{flag=1;
		return 0;
		}
	}
	if(flag==0)
	return k;
}
