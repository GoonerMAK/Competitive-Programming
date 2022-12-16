///  Patterns ///

#include<stdio.h>
int main()
{
    int digits, divisor;
    scanf("%d %d", &digits, &divisor);

    if(divisor==10)
    {
        if( digits==1 )
        {
            printf("-1");
            return 0;
        }

        while(--digits)
        {
            printf("%d", 1);          /// any digit will work (1-9)
        }
        printf("%d", 0);
    }

    else
    {
        while(digits--)
        {
            printf("%d", divisor);
        }
    }

    return 0;
}


///      44444444444444444444 is divisible by 4
///      11111111111111111110 is divisible by 10
///      44444444444444444440 is divisible by 10
///      77777777777777777777 is divisible by 7
