#include <stdio.h>
int main()
{
int k=1,i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j<=i)
if((k+j)%2==0)
printf("1");
else
printf("0");
}
k++;
printf("\n");
}
return 0;
}
