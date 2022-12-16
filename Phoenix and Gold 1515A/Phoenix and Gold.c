#include<stdio.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        int pieces, forbidden_weight, sum=0, sum2=0;
        scanf("%d %d", &pieces, &forbidden_weight);
        int arr[pieces];

        for(int i=0 ; i<pieces ; i++)
        {
            scanf("%d", &arr[i]);
            sum = sum + arr[i];
        }

        if(sum == forbidden_weight)                 /// if the sum of all numbers is equal to the forbidden weight then it's impossible to rearrange the array (the scale will eventually explode)
        {
            printf("NO\n");                         /// otherwise the array can be rearranged
        }

        else
        {
            printf("YES\n");

            for(int i=0 ; i<pieces ; i++)
            {
                sum2 = sum2 + arr[i];

                if(sum2 == forbidden_weight)                  ///  if at some point, the sum is equal to the 'forbidden weight' then
                {
                    printf("%d %d ", arr[i+1], arr[i]);      ///   we could write it this way... printing arr[i+1] before arr[i]
                    i++;                                    ///    because arr[i] causes the sum to be equal to the 'forbidden weight'
                }

                else
                {
                    printf("%d ", arr[i]);
                }
            }

        }

    }

    return 0;

}
