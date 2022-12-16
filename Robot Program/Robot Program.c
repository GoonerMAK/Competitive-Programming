//#include<stdio.h>
//int main()
//{
//    int tests, x, y;
//
//    scanf("%d", &tests);
//
//    while(tests--)
//    {
//        scanf("%d %d", &x, &y);
//
//        if(x==y)
//        {
//            printf("%d\n", x+y);
//        }
//
//        else
//        {
//            int ans = (x<y) ? ( (x*2)+1 + ( (y-x)-1 )*2)  :  ( (y*2)+1 + ( (x-y)-1 )*2) ;          ///  Logic = ( (small*2) + 1 ) + (difference of two nums - 1)*2
//
//            printf("%d\n", ans);
//        }
//
//    }
//
//    return 0;
//}



#include<stdio.h>
int main()
{
    int tests, x, y;

    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d %d", &x, &y);

        if(x==y)
        {
            printf("%d\n", x+y);
        }

        else
        {
            int ans = (x>y) ? x*2 - 1 : y*2 - 1 ;          ///  one less command than (larger number * 2)

            printf("%d\n", ans);
        }

    }

    return 0;
}

