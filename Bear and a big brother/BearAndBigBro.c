#include<stdio.h>
int main()
{
   int mak,bob,y=0;
   scanf("%d %d", &mak, &bob);

   while(mak<=bob)
   {
     mak=mak*3;
     bob=bob*2;
     y++;
   }

   printf("%d",y);

   return 0;
}
