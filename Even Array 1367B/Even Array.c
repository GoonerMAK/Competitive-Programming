#include<stdio.h>
int main()
{
    int tests, i;
    scanf("%d", &tests);

    while(tests--)
    {
        int n, wrong=0, even=0, odd=0;
        scanf("%d", &n);

        int arr[n];

        for(i=0 ; i<n ; i++)
        {
            scanf("%d", &arr[i] );

            ( (arr[i]%2 != i%2) ? wrong++, ( ( arr[i]%2==0 ) ? even++ : odd++ ) : arr[i] );        /// if (index mod 2) and (number mod 2) doesn't match then we are incrementing 'wrong'
                                                                                                  ///  if it matches... then we have to check if the number of odds and evens are the same or not...
        }

        if(wrong%2==0 && even==odd)
        {
            printf("%d\n", wrong/2);                  /// it is possible to solve the problem if and only if 'wrong' is even && even == odd (swapping involves two elements)
        }

        else
        {
            printf("-1\n");                     ///  otherwise it's impossible (swapping involves two elements)
        }
    }

    return 0;
}
