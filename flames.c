#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],c,s2[200],s3[]="flames";
int i=0,j,z=0,a,b,k=0;
printf("enter first name\n");
gets(s1);
printf("enter second name\n");
gets(s2);
a=strlen(s1);
b=strlen(s2);
a=a+b;
while(s1[i]!='\0')
{
j=0;
   while(s2[j]!='\0')
   {
      if(s1[i]==s2[j]){
        z++;
        s2[j]='@';
        break;
        }
      j++;
    }
    i++;
}
i=0;
a=a-(2*z);
for(j=1;j<=400;j++)
{
  if(s3[i]!=' ')
   k++;
   if((a==k)&&s3[i]!=' ')
    {
      c=s3[i];
    s3[i]=' ';
      k=0;
     }
    i++;
  if(i==6)
   i=0;
}
switch(c)
{
case 'f':printf("they are friends");break;
case 'l':printf("they are lovers");break;
case 'a':printf("they have more AFFECTION");break;
case 'm':printf("they are married");break;
case 'e':printf("they are enemies");break;
case 's':printf("they are sisters and brothers");break;
default:printf("they have no relationship");break;
}
}