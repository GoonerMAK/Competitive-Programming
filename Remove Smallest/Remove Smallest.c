#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
         int size;
         int i,j,count=0;

         scanf("%d", &size);
         int arr[size];

         for(i=0; i<size ; i++)
         {
             scanf("%d", &arr[i]);
         }

         if(size==1)
         {
             printf("YES\n");
             continue;
         }

         for(i=0 ;  i<size ; i++)
         {
             for(j=0 ; j<size ; j++)
             {
                 if( j!=i && (fabs(arr[i]-arr[j]) <= 1 ) )
                 {
                     count++;
                     break;
                 }
             }

         }

         if(count==size)
         {
             printf("YES\n");
         }

         else
         {
             printf("NO\n");
         }

    }

    return 0;
}
