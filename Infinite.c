#include<stdio.h>
int main()
{
    int t;
    for(t=1;t!=-1;t++)
    {
        int n;
        scanf("%d",&n);
        if(n==-1)
        break;
        else
        printf("%d
",n*n);
    }
}