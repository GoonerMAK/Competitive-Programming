#include<stdio.h>
int main()
{
    int size, cost0, cost1, change, test;
    scanf("%d", &test);

    while(test--)
    {
        scanf("%d %d %d %d", &size, &cost0, &cost1, &change);
        int sum =0, count0=0, count1=0;
        char str[size+1];
        scanf("%s", str);

        for(int i=0; i<size ; i++)
        {
            if(str[i]=='1')
            {
                count1++;
            }

            else if(str[i]=='0')
            {
                count0++;
            }
        }

//        printf("Count of 1 is: %d\nCount of 0 is: %d\n", count1, count0);

        if(cost0 < cost1)
        {
            if(change+cost0 <= cost1)                                                   ///    4 6 10 3
            {                                                                          ///      1001
                sum = cost0*count0  +  change*count1 + cost0*count1  ;                ///  (6*2) + (3*2) + (6*2)
            }

            else
            {
                sum = cost0*count0 + cost1*count1 ;
            }
        }

        else if(cost1 < cost0)
        {
            if(change+cost1 <= cost0)
            {
                sum = cost1*count1  +  change*count0 + cost1*count0  ;
            }

            else
            {
                sum = cost0*count0 + cost1*count1 ;
            }
        }

        else                                                        /// when cost0 and cost1 are same
        {
            sum = cost0*count0 + cost1*count1 ;
        }

        printf("%d\n", sum);
    }

    return 0;
}



///    in the example 5 10 12 4

///    no point of changing since changing will cost (10+4)=14 or (12+4)=16
///    both of them are bigger than 12

///    But in the example  5 10 12 1

///    changing makes sense because (10+1)=11
///    which is smaller than 12
