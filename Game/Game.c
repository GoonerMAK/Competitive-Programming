#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%d", (n%2==0) ? 2 : 1 );
    return 0;
}
