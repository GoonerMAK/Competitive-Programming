#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    long long int num, small=1000000001, max=0, ans;

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld", &num);

        if(num < small)
        {
            small=num;
        }

        if(num > max)
        {
            max = num;
        }

    }

    ans = ( (max-small)+1 ) - n;

    printf("%lld", ans);
    return 0;
}
