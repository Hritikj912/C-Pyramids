#include<stdio.h>
#include<conio.h>
int main() 
    {char ch;
    int j,i,k,n;
printf("Enter no. of lines\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{   ch='A';
 for(j=1;j<=n-i;j++)
  {
   printf(" ");
}
  for(k=1;k<=i;k++)
  {
    printf("%c",ch);
        ch++;
   }
   for(k=1;k<=i;k++)
{
   printf("%d",k);
}
printf("\n");
}
printf("\n");
getch();
return 0;
}


