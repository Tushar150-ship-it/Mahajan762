#include<stdio.h>
#include<string.h>
int main()
{
int i,n=0,temp;
char str[10],st[10];
gets(str);
for(i=0;i<=strlen(str);i++)
{
if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
}
else
{
str[i]=str[i];
}
}
printf("%s ",str);
}
