#include<stdio.h>
int main()
{
    long long int a,b,s=0;
    int t,i;

    scanf("%d", &t);

    for(i=0 ; i<t ; i++)
    {
        scanf("%lld %lld", &a, &b);

        if(a%b==0)
        {
            printf("%d\n", 0);

        }
        else if(b>a)
        {
            printf("%lld\n", b-a);

        }

        else if(a>b && (a%b)!=0)
        {
            for( ; (a%b)!=0 ; a++)
            {
                s++;
            }
            printf("%lld\n", s);
            s=0;
        }


    }
    return 0;
}
