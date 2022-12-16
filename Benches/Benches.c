#include<stdio.h>
int main()
{
    long long int n, ans;

    scanf("%lld", &n);                               // n = paths

    ans =   n * (n-1) * (n-2) * (n-3) * (n-4);
    ans = ans*(ans/120);

    printf("%lld", ans);

    return 0;
}
