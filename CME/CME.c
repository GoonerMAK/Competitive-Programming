///         Patterns        ///

#include<stdio.h>
int main()
{
    int tests, n;

    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d", &n);

        if(n < 4)
        {
            printf("%d\n", 4-n);
        }

        else
        {
            printf("%d\n", n%2 );
        }
    }
    return 0;
}
