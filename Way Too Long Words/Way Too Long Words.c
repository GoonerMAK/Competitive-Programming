#include<stdio.h>
#include<string.h>
int main()
{
    int tests, i, size;
    char arr[101];

    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%s", arr);

        if( strlen(arr) <11)
        {
            puts(arr);
        }

        else
        {
            printf("%c%d%c\n", arr[0], strlen(arr)-2, arr[strlen(arr)-1] );
        }

    }

    return 0;
}
