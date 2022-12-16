#include<stdio.h>
#include<math.h>
int main()
{
    int n, operations, i;
    scanf("%d %d", &n, &operations);

    long long int arr[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld", &arr[i]);
    }

    while(operations--)
    {
        long long int sum =0;
        int operation, pos1, pos2, add;
        scanf("%d", &operation);

        if(operation == 2)
        {
            scanf("%d %d", &pos1, &pos2);

            for(i = pos1-1 ; i < pos2-1 ; i++)
            {
                sum = sum + llabs(arr[i]-arr[i+1]);
            }

            printf("%lld\n", sum);
        }

        else
        {
            scanf("%d %d %d", &pos1, &pos2, &add);

            for(i=pos1-1 ; i<= pos2-1 ; i++)
            {
                arr[i] = arr[i] + add;
            }
        }
    }

    return 0;
}
