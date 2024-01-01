#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,n,i,flag;
    scanf("%d",&n);
    n3=n1+n2;
    while(n3<=n)
    {
        if(n3==n)
        {
            flag=1;
            break;
        }
        n1=n2;
        n2=n3;
        n3=n1+n3;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}