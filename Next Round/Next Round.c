#include<stdio.h>
int main()
{
         int n,k,i,a,d=0;

         scanf("%d %d", &n, &k);

         int arr[n];

         for(i=0 ; i<n ; i++)
         {
              scanf("%d", &arr[i]);
         }

         for(i=0 ; i<n ; i++)
         {
              if(arr[i]>=arr[k-1] && arr[i]>0)
              {
                 d++;
              }
         }

         printf("%d", d);

         return 0;
}
