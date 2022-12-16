#include<stdio.h>
int main()
{
    int count=0, i, size;
    scanf("%d", &size);

    char arr[size+1];

    scanf("%s", arr);

    for(i=0 ; i<size ; i++)
    {
        if( arr[i] == 'D' )
        {
            count++;                /// incrementing count if it's D
        }

        else
        {
            count--;               /// decrementing count if it's A
        }
    }

    printf( count>0 ? "Danik" : ( count<0 ? "Anton" : "Friendship") );          /// if the count remains 0 then it means that both of them won the same amount of matches

    return 0;
}
