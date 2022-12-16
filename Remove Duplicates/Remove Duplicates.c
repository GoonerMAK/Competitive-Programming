#include<stdio.h>
int main()
{
    int size, i, j, count=0;
    scanf("%d", &size);

    int arr[size];

    for(i=0 ; i<size ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0 ; i<size ; i++)
    {
         if(arr[i] != 0)
         {
             count++;
         }

         for(j=i+1 ; j<size ; j++)
         {
              if(arr[i] == arr[j])
              {
                  arr[j]=0;
              }
         }
    }

    printf("%d\n", count);

    for(i=0 ; i<size ; i++)
    {
         if(arr[i] != 0)
         {
             printf("%d ", arr[i]);
         }
    }

    return 0;
}
