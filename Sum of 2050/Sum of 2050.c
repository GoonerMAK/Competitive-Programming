#include<stdio.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        long long int num, d;
        int r, ans=0;

        scanf("%lld", &num);

        if(num<2050 || num%2050!=0)
        {
            printf("-1\n");
        }

        else
        {
            d = num/2050;

            while(d>0)
            {
                r = d%10;
                d = d/10;
                ans = ans + r;
            }
            printf("%d\n", ans);
        }

    }

    return 0;
}
