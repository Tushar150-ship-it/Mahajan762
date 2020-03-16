#include<stdio.h>
#include<string.h>
int main()
{
int i=0,j;
char str[10],st[10];
gets(str);
gets(st);
while(str[i]!='\0')
{
i++;
}
j=0;
while(st[j]!='\0')
{
 str[i]=st[j];
 i++;
 j++;
}
str[i]='\0';
printf("\n%s",str);
}


