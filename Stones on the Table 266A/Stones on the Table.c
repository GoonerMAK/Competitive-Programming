#include<stdio.h>
int main()
{
    int size, i, count=0;
    scanf("%d", &size);

    char stones[size+1];

    scanf("%s", stones);

    for(i=0 ; i < (size-1) ; i++)
    {
        if( stones[i] == stones[i+1] )           ///  The count will increase if the neighboring stones are of the same colour
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
