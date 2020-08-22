main()
{
	int n,i,j,k=0,l;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
	        if(i>n)
			{
				k=k+2;
			}
		for(j=1;j<=2*n-1;j++)
		{
			printf("%d",2*n-1-i+k);
		}
		printf("\n");
	}
}
