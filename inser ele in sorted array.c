#include <stdio.h>
int main()
{
    int i,n,a[10],j,key,item;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&item);
    

        for(i=n-1;a[i]>item;i--)
        {
        a[i+1]=a[i];
        }
        a[i+1]=item;
    for(i=0;i<n+1;i++)
    printf("%d ",a[i]);

    return 0;
}
