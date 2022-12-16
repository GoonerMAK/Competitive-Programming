#include<stdio.h>
int main()
{
    int t,i,j,k,num_points,num_segments,s=0;
    long long int segment1, segment2;

    scanf("%d", &t);

    for(k=1 ; k<=t ; k++)
    {
        printf("Case %d:\n", k);
        scanf("%d %d", &num_points, &num_segments);

        int arr[num_points];

        for(i=0 ; i<num_points ; i++)
        {
            scanf("%lld", &arr[i]);          // scanning points
        }

        for(j=0 ; j<num_segments ; j++)
        {
               scanf("%lld %lld", &segment1, &segment2);

               for(i=0 ; i<num_points ; i++)
               {
                    if(arr[i]>=segment1 && arr[i]<=segment2)
                    {
                         s++;
                    }
               }
               printf("%d\n", s);
               s=0;
        }

    }
}
