#include<stdio.h>
int main()
{
int n,i;
printf("enter the intger number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d",n,i,n*i);
}
return 0;
}
