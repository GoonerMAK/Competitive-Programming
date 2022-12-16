#include<stdio.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        int n, max_digit=0;
        scanf("%d", &n);

        while(n>0)
        {
            if(n%10 > max_digit)                     /// finding out the max digit of the number
            {
                max_digit = n%10;                   ///  n%10 = last digit
            }

            n = n/10;
        }

        printf("%d\n", max_digit);
    }

    return 0;
}


///   The minimum number of binary decimals required is equals to the max digit of the number
