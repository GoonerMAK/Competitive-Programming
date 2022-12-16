#include<stdio.h>
int main()
{
    long long int n;
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%lld", &n);

       (n%4==0) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}
