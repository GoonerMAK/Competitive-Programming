#include<stdio.h>
int main()
{
    int n, ans =1, j=1, tests;
    scanf("%d", &tests);
    int arr[1001]={0};
    while(j<=1000)
    {
         if(ans%3 != 0 && ans%10!=3)
         {
             arr[j] = ans;
             j++;
         }
         ans++;
    }

    while(tests--)
    {
         scanf("%d", &n);
         printf("%d\n", arr[n]);
    }
    return 0;
}
