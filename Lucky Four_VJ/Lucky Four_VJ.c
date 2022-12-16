#include<stdio.h>
int main()
{
    int t,i;
    long long int n,f=0;

    scanf("%d", &t);

    for(i=0 ; i<t ; i++)
    {
        scanf("%lld", &n);

        while(n!=0)
        {
            if(n%10==4)
            {
                f++;
            }

            n=n/10;
        }
        printf("%lld\n", f);
        f=0;
    }

    return 0;
}
