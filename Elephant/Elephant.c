#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);

    if(a%5==0)
        printf("%lld",a/5);
    else if(a%5!=0)
        printf("%lld",a/5+1);

    return 0;
}
