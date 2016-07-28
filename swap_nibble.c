#include<stdio.h>
int main()
{
    int n,b=15,left,right,res;
    scanf("%d",&n);
    right = n&b;
    n=n>>4;
    left = n&b;
    right=right<<4;
    res = left | right;
    printf("%d\n",res);
    return 0;
}
