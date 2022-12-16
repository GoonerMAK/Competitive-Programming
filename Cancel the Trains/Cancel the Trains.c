#include<stdio.h>
int main()
{
    int tests, bottom, left, i, j, count=0;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d %d", &bottom, &left);

        int arr1[bottom], arr2[left];

        for(i=0; i<bottom ; i++)
        {
            scanf("%d", &arr1[i]);
        }

        for(i=0; i<left ; i++)
        {
            scanf("%d", &arr2[i]);
        }

        for(i=0 ; i < bottom ; i++)
        {
            for(j=0 ; j<left ; j++)
            {
                 if(arr1[i]==arr2[j])
                 {
                     count++;
                     break;
                 }
            }
        }

        printf("%d\n", count);
        count=0;
    }

    return 0;
}
