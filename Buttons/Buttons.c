#include<stdio.h>
int main()
{
    int i, n, count=1, temp;
    long long int sum=0;

    scanf("%d", &n);
    temp = n;

    for(i=0 ; i<n ; i++)
    {
        sum = sum + (--temp * count++);
    }

    printf("%lld", sum+n);

    return 0;
}
