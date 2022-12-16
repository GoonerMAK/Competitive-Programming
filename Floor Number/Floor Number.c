#include<stdio.h>
int main()
{
     int tests, petya_apartment, apartment_per_floor;
     int total=2, floor=1;

     scanf("%d", &tests);

     for(int i=0 ; i<tests ; i++)
     {
         scanf("%d %d", &petya_apartment, &apartment_per_floor);

         if(petya_apartment<=2)
         {
             printf("%d\n", floor);
         }

         else
         {
             while(total < petya_apartment)
             {
                 total = total + apartment_per_floor;
                 floor++;
             }
             printf("%d\n", floor);
             floor=1;
             total=2;
         }

     }

     return 0;

}
