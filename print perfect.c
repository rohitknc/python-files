#include<stdio.h>
int main()
{
    int i,j,s,k;
    printf("enter a number\n");
    scanf("%d",&i);
printf("the perfect numbers are\n");
  for(k=1;k<=i;k++)
{
     s=0;
    for(j=1;j<k;j++)
    {
      if(k%j==0)
       s=s+j;
    }
    if(s==k)
     printf("%d ",k);
}
    return 0;
}