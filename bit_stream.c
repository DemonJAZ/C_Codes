#include<stdio.h>
int main()
{
    unsigned long long num=0,counter=0,i,bit=0;
    
    while (i != -1) {
        printf("Enter bit or -1 to quit:");
        scanf("%lld",&i);
        num=num|i;
        counter++;
        if (counter >= 4) {
        
            printf("%llu \n",num);
            if(num%3 == 0)
            {
                printf("YES! \n");
            }
            else
            {
                printf("NO! \n");
            }
        }
        
        num=num<<1;
    }
    printf("%llu\n",counter);
    printf("%llu\n",num*2);
    return 0;
}
