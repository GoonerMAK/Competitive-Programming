#include<stdio.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        int n, operations, a, b;                                  /// a and b are the two positions
        scanf("%d %d %d %d", &n, &operations, &a, &b);

        int max,min;

        if(a>b)
        {
            max = a;
            min = b;
        }

        else
        {
            max = b;
            min = a;
        }

        while(operations--)
        {
            if(max!=n)
            {
                max++;
            }

            else if(min!=1)
            {
                min--;
            }
        }

        printf("%d\n", max-min);
    }


    return 0;
}
