///        DO NOT PASS 0 AS %lld      ///

#include<stdio.h>
int main()
{
    int tests;
    long long int a, b, c, max;

    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        max = (a>b && a>c) ? a : ( (b>c)?b:c );

        if(a==b && b==c )
        {
            printf("1 1 1\n");
        }

        else if( (a==max && b==max) || (b==max && c==max) || (a==max && c==max) )
        {
            a = max-a+1;
            b = max-b+1;
            c = max-c+1;

            printf("%lld %lld %lld\n", a, b, c);
        }

        else
        {
            if(a==max)
            {
                b = (a - b) + 1;
                c = (a - c) + 1;
                printf("0 %lld %lld\n", b, c);
            }

            else if(b==max)
            {
                a = (b - a) + 1;
                c = (b - c) + 1;
                printf("%lld 0 %lld\n", a, c );
            }

            else if(c==max)
            {
                a = (c - a) + 1;
                b = (c - b) + 1;
                printf("%lld %lld 0\n", a, b);
            }
        }


    }

    return 0;
}
