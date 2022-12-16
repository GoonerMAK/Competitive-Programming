#include<stdio.h>
int main()
{
    long long int n,digit=0;
    scanf("%lld", &n);

    while(n!=0)
    {
        if(n%10==4 || n%10==7)
        digit++;
        n=n/10;
    }

    if(digit==4 || digit==7)
        printf("YES");
    else
        printf("NO");

    return 0;

}
