#include<stdio.h>
void main()
{
int n,i,sum=1;
printf("enter the value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("sum=%d",sum);
}
}
