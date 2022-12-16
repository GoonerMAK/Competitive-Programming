#include<stdio.h>
int main()
{
     int levels,arr[100]={0},tries,level_done,p=2;
     scanf("%d", &levels);

     while(p--)
     {
         scanf("%d", &tries);

         while(tries--)
         {
             scanf("%d", &level_done);
             arr[level_done-1]++;
         }
     }

     for(int i=0 ; i<levels ; i++)
     {
         if(arr[i]==0)
         {
             printf("Oh, my keyboard!");
             return 0;
         }
     }

      printf("I become the guy.");
      return 0;
}
