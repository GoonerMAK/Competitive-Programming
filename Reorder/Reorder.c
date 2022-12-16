#include<stdio.h>
int main()
{
    int tests, size, sum=0, num;
    scanf("%d", &tests);

    while(tests--)
    {
         scanf("%d %d", &size, &num);
         int arr[size];

         for(int i=0 ; i<size ; i++)
         {
             scanf("%d", &arr[i]);
             sum = sum + arr[i];
         }

         if(sum == num)
         {
             printf("YES\n");
         }
         else
         {
             printf("NO\n");
         }

         sum = 0;
    }
    return 0;
}
