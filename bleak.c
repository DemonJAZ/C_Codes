#include<stdio.h>
int countset(int n)
{
    int count=0;
    while (n) {
        if(n&1)
            count++;
        n=n>>1;
    }
    return count;
}

int main()
{
    int n,i,flag=1;
    scanf("%d",&n);
    for (i = 1; i<n ; i++) {
        if ((i+countset(i)) == n) {
            printf("Not Bleak!\n");
            flag=0;
            break;
        }
    }
    if(flag == 1)
        printf("Bleak!\n");
    
    return 0;
}
