#include<stdio.h>
int main()
{
int i,n,j,a[100][100];
float sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

for(i=0;i<n;i++)
for(j=0;j<n;j++)
sum=sum+a[i][j];

printf("%.0f %.2f",sum,sum/n);

}
