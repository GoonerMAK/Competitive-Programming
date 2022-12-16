#include<stdio.h>
int main()
{
    long long int num, remainder, max_num, ans;
    int tests, i;

    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%lld %lld %lld", &num, &remainder, &max_num);

        ans = ( ((max_num - remainder)/num)*num ) + remainder ;

        printf("%lld\n", ans);
    }

    return 0;
}
