#include<stdio.h>
int main()
{
    long long int k,n,w,sum;

    scanf("%lld %lld %lld", &k, &n, &w);
    sum = k*((w*(w+1))/2);
    if(sum>n)
        printf("%lld", sum-n);
    else
        printf("0");

    return 0;
}
