#include<stdio.h>
int main()
{
    int card1=0,card2=0,card_type,card_no;
    printf("Heart = 0 , Spade = 1 , Daimond = 2 , Club = 3  \n");
    printf("Enter card type :");
    scanf("%d",&card_type);
    printf("Enter card number :");
    scanf("%d",&card_no);
    card1 |= card_type;
    card1 = card1<<4;
    card1 |= card_no;
    printf("Enter card 2 type :");
    scanf("%d",&card_type);
    printf("Enter card 2 number :");
    scanf("%d",&card_no);
    card2 |= card_type;
    card2 = card2<<4;
    card2 |= card_no;
    
    if ((card1 & card2) == card1) {
        printf("Same!! \n");
    }
    else
        printf("Not Same!! \n");
    
    return 0;
}
