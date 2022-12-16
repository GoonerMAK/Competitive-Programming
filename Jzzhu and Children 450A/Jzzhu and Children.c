#include<stdio.h>
int main()
{
    int children, candies, i, position;

    scanf("%d %d", &children, &candies);

    int arr[children] ;

    for(i=0 ; i<children ; i++)
    {
        scanf("%d", &arr[i]);
    }

    position = children;

    for(int j=0 ; j<children ; j++)
    {
        for( i=0 ; i<children ; i++)
        {
            if(arr[i] > candies)                          /// The last child to go home...
            {                                            ///  is when this condition is true for the last time
                arr[i] = arr[i] - candies;
                position = i+1;
            }
        }

    }

    printf("%d", position);
    return 0;
}
