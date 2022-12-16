#include<stdio.h>
int main()
{
    int shovel_price, special_coin, whole_price;
    scanf("%d %d", &shovel_price, &special_coin);
    int i=1;
    while(1)
    {
         whole_price = shovel_price*i;
         if( (whole_price%10==special_coin) || (whole_price%10==0) )
         {
             break;
         }
         i++;
    }

    printf("%d", i);
    return 0;
}
