#include<stdio.h>
int main()
{
    int n,d=8,l;
    scanf("%d",&n);
    n=n&0xf;
    l=(n^d)-8;
    if(l<0)
        printf("%d\n",l+8);
    else
        printf("%d\n",l);
    return 0;
}
