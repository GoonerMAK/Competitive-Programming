#include<stdio.h>
int main()
{
    int size, i, tests, position;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d", &size);
        int arr[size];

        for(i=0 ; i<size ; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(i=1 ; i<size ; i++)
        {
            if(arr[0] != arr[i] && i>1)
            {
                position = i+1;
                break;
            }

            else if(arr[0]!= arr[i] && arr[0]!=arr[i+1])
            {
                position = 1;
                break;
            }

            else if(arr[0]!= arr[i] && arr[0]==arr[i+1])
            {
                position = 2;
                break;
            }

        }

        printf("%d\n", position);
        position = 0;
    }

    return 0;

}
