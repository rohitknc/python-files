#include<stdio.h>
void dig1(int);
void dig2(int);
void dig3(int);
void main()
{
    int n,a[100],i,j=0,k;
    printf("enter a number\n");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        k=i%10;
        a[j]=k;
        i=i/10;
        j++;
    }
    if(n==0)
        printf("zero");
    else if(n>0&&n<=1000000000)
    {
        if(n==1000000000)
        {
            printf("one billion");
        }
        if(a[8]==1&&a[7]!=0)
        dig2(a[7]);
        else
        {
        dig3(a[8]);
        dig1(a[7]);
        }
        if(a[7]!=0||a[8]!=0)
            printf("crore ");
        if(a[6]==1&&a[5]!=0)
        {
            dig2(a[5]);
        }
        else {
            dig3(a[6]);
            dig1(a[5]);
        }
        if(a[6]!=0||a[5]!=0) {
            printf("lack ");
        }
        if(a[4]==1&&a[3]!=0) {
            dig2(a[3]);
        }
        else
        {
            dig3(a[4]);
            dig1(a[3]);
        }
        if(a[4]!=0||a[3]!=0)
        {
            printf("thousund ");
        }
        dig1(a[2]);
        if(a[2]!=0)
            printf("hundread ");
        if(a[1]==1&&a[0]!=0)
        {
            dig2(a[0]);
        }
        else
        {
            dig3(a[1]);
            dig1(a[0]);
        }
    }
    else
    {
        printf("enter upto a billion only");
    }
}
void dig1(int x)
{
    switch(x)
    {
    case 1:
        printf("one ");
        break;
    case 2:
        printf("two ");
        break;
    case 3:
        printf("three ");
        break;
    case 4:
        printf("four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("eight ");
        break;
    case 9:
        printf("nine ");
        break;
    }
}
void dig2(int y)
{
    switch(y)
    {
    case 1:
        printf("elven ");
        break;
    case 2:
        printf("twelve ");
        break;
    case 3:
        printf("thirteen ");
        break;
    case 4:
        printf("fourteen ");
        break;
    case 5:
        printf("fifteen ");
        break;
    case 6:
        printf("sixteen ");
        break;
    case 7:
        printf("seventeen ");
        break;
    case 8:
        printf("eighteen ");
        break;
    case 9:
        printf("ninteen ");
        break;
    }
}
void dig3(int m)
{
    switch(m)
    {
    case 1:
        printf("ten ");
        break;
    case 2:
        printf("twenty ");
        break;
    case 3:
        printf("thirty ");
        break;
    case 4:
        printf("forty ");
        break;
    case 5:
        printf("fifty ");
        break;
    case 6:
        printf("sixty ");
        break;
    case 7:
        printf("seventy ");
        break;
    case 8:
        printf("eighty ");
        break;
    case 9:
        printf("ninety ");
        break;
    }
}