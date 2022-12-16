#include<stdio.h>
int main()
{
    long long int i,n,k;
    scanf("%lld %lld", &n, &k);

    for(i=0;i<k;i++)
    {
        if(n%10!=0)
            n=n-1;
        else
            n=n/10;

    }

    printf("%lld", n);
    return 0;
}
