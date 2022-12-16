#include<stdio.h>
int main()
{
    int operations, i, ans=0;;
    scanf("%d", &operations);

    while(operations--)
    {
        char arr[5];
        scanf("%s", arr);

        if( arr[1] == '+' )              /// the 1'th index makes the difference (X++, --X, X++, X--)
        {
            ans++;
        }

        else
        {
            ans--;
        }
    }

    printf("%d", ans);

    return 0;
}
