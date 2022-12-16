#include<stdio.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        long long int n, count=0;

        scanf("%lld", &n);

        while(n>1)
        {
            (n%2==0) ?  ( (n=n/2), (count++) ) : ( (n%3==0) ? ( (n=(2*n)/3), (count++) ) : ( (n%5==0) ? ( (n=(4*n)/5), (count++) ) : (count=-1, n=0) ) );        /// Ternary or conditional operator ( ? : )
        }

        printf("%lld\n", count);
    }

    return 0;
}
