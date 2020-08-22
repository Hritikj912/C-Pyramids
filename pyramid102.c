main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(i<=j&&(i+j<=2*n))
			printf("%d",n-i+1);
		    else if(j<i&&(i+j<=2*n))
        	printf("%d",n-j+1); 
	        else if((i+j>2*n)&&i>=j)
	       	printf("%d",i-n+1); 
	       	else if((i+j>2*n)&&i<j)
	       	printf("%d",j-n+1); 
		}
		printf("\n");
	}
}
//	    
     
