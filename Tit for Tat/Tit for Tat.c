#include<stdio.h>
int main()
{
    int tests, size, operations, i;
    scanf("%d", &tests);

    while(tests--)
    {
         scanf("%d %d", &size, &operations);
         int arr[size];

         for(i=0 ; i<size ; i++)
         {
             scanf("%d", &arr[i]);
         }

         while(operations--)
         {
             for(i=0 ; i<size ; i++)
             {
                  if(arr[i] > 0)
                  {
                      arr[i] = arr[i] - 1;
                      arr[size-1] = arr[size-1] + 1;
                      break;
                  }
             }
         }

         for(i=0 ; i<size ; i++)
         {
             printf("%d ", arr[i]);
         }
         printf("\n");
    }

    return 0;
}
