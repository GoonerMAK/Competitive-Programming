#include<stdio.h>
#include<math.h>
int main()
{
    int tests, i, j;
    scanf("%d", &tests);

    while(tests--)
    {
        int n, min = 1001, difference;
        scanf("%d", &n);

        int arr[n];

        for(i=0 ; i<n ; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(i=0 ; i<(n-1) ; i++)
        {
            for(j=i+1 ; j<n ; j++)
            {
                difference = abs(arr[i] - arr[j]);              /// calculating the difference between the i(th) element and the rest of the numbers

                if(difference <= min)
                {
                    min = difference;                       ///  calculating the lowest difference
                }
            }
        }

        printf("%d\n", min);

    }

    return 0;
}
