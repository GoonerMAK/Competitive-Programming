#include<stdio.h>
int main()
{
     int n,i,big=0,sum=0;

     scanf("%d", &n);

     int arr[n];

     for(i=0 ; i<n ; i++)
     {
          scanf("%d", &arr[i]);

              if(arr[i] > big)
              {
                  big = arr[i];
              }

     }

     for(i=0 ; i<n ; i++)
     {
         sum = sum + (big - arr[i]);
     }

      printf("%d", sum);

      return 0;
}
