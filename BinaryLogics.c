#include<stdio.h>
int invert(int x,int p,int n) //invert given n bits
{
    return (~(~0 << n))<<p^x;
}
int BitAnd(int x, int y)
{
    return ~(~x|~y);
}
int BitXor(int x,int y)
{
    return (~(~x&~y))&~(x&y);
}
int bang(int x)  // Find NOT without using !
{
    int neg_x = ~x+1;
    return neg_x == x;
    //return ((x>>31)&1) | (neg_x>>31&1);
}
int conditional(int x, int y , int z)
{
    return ((!(!x<<31)>>31)&y) | (((!x<<31)>>31)&z) ;  //return x?y:z;
}
int get_byte(int n,int x)
{
    int a = 0xff;
    scanf("%d",&n);
    scanf("%x",&x);
    a=a<<(n*8);
    x=x^a;
    x=x>>(n*8);
    x=x^0xff;
    x=x&0xff;
    return x;
}
int main()
{
    printf("%x\n",get_byte(1,87654321));
    return 0;
}
