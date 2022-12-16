#include<stdio.h>
int main()
{
    int n,i,s1,s2;
    long long int big=0,small=1000000000;

    scanf("%d", &n);
    long long int c[n], d[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld %lld", &c[i], &d[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        if(c[i]<=small)
        {
            small=c[i];
        }
    }

    for(i=0 ; i<n ; i++)
    {
        if(d[i]>=big)
        {
            big=d[i];
        }
    }

//    printf("%d %d\n", small, big);

    for(i=0 ; i<n ; i++)
    {
        if(c[i]==small && d[i]==big)
        {
            printf("%d", i+1);
            return 0;
        }

    }

    printf("-1");
    return 0;
}
