#include<stdio.h>
int main()
{
    int words, delay, count=0;            //   delay = crazy computer delay
    scanf("%d %d", &words, &delay);
    int arr[words];

    for(int i=0 ; i<words ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=words ; i>=1 ; i--)
    {
         count++;

        if( ( arr[i-1] - arr[i-2] ) > delay )
        {
            break;
        }
    }

    printf("%d", count);

    return 0;
}
