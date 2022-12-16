#include<stdio.h>
#include<string.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        int size, i, count=0;
        scanf("%d", &size);

        char arr[size];

        scanf("%s", arr);

        for(i=size-1 ;  ; i--)
        {
            if( arr[i] != ')')
            {
                break;
            }
            count++;
        }

        (count> size/2) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}
