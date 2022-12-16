#include<stdio.h>
int main()
{
    long long int L1, R1, L2, R2;
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%lld %lld %lld %lld", &L1, &R1, &L2, &R2);

        if(L1 == R2)
        {
            L1++;                                         ///  To make two numbers distinct (so that a != b)
        }

        printf("%lld %lld\n", L1, R2);
    }

    return 0;
}
