#include<stdio.h>
#include<string.h>
int main()
{
int i=0,n=0,j=0;
char str[10],st[10],s[10];
scanf("%s",str);
scanf("%s",st);
while(str[i]!='\0')
{
s[j]=str[i];
j++;
i++;
}
i=0;
while(st[i]!='\0')
{
s[j]=st[i];
i++;
j++;
}
s[j]='\0';
printf("\n%s ",s);
}
