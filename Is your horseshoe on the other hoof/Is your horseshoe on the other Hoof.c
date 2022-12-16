#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,sum=3;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if(a!=b && a!=c && a!=d)
        sum--;

    if(b!=c && b!=d)
        sum--;

    if(c!=d)
        sum--;

    printf("%lld", sum);

    return 0;
}
