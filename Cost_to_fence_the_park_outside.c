#include<stdio.h>
int main()
{
    int l,b,w,c,ap,lr,br,ar,af,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ap=l*b;
    lr=l+(2*w);
    br=b+(2*w);
    ar=lr*br;
    af=ar-ap;
    tc=af*c;
    if(tc==af*c)
    {
        printf("%d",tc);
    }
}