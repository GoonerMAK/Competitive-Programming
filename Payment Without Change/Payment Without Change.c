#include<stdio.h>
int main()
{
    int tests;
    long long int num, ones, value, amount;

    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%lld %lld %lld %lld", &num, &ones, &value, &amount);

        if(num < (amount/value))
        {
            if( (amount - num*value) > ones )
            {
                printf("NO\n");
            }

            else
            {
                printf("YES\n");
            }

        }

        else
        {
            if( (amount-(amount/value)*value) > ones )
            {
                printf("NO\n");
            }

            else
            {
                printf("YES\n");
            }
        }

    }

    return 0;
}
