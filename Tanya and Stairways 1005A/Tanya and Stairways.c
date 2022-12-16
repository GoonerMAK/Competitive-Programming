#include<stdio.h>
int main()
{
    int steps, count=0, i;
    scanf("%d", &steps);

    int arr[steps];

    for(i=0 ; i<steps ; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i]==1)                    /// The number of 1's = number of stairways
        {
            count++;
        }
    }

    printf("%d\n", count);
    count=0;

    for(i=0 ; i<steps ; i++)
    {
        if(arr[i] == 1 && i!=0 )         /// End of stairway when there's a '1'
        {
            printf("%d ", count);
            count=0;
        }

        count++;
    }

    printf("%d", arr[steps-1]);          /// one got left out because of (i!=0)

    return 0;
}





// for(i=0;i<n-1;i++) if(a[i]>=a[i+1]) s++;
// printf("%d\n",s);
//
// for(i=0;i<n;i++)
// if(a[i]>=a[i+1])
// printf("%d ",a[i]);




