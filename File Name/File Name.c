//#include<stdio.h>
//int main()
//{
//    int n, count=0, sum=0;
//    scanf("%d", &n);
//
//    char arr[n+1];
//
//    getchar();                              //
//                                            //     scanf("%s", arr); is a better way of doing this
//    gets(arr);                              //
//
//    for(int i=0 ; i<=n ; i++)
//    {
//        if(arr[i]=='x')
//        {
//            count++;
//        }
//
//        else
//        {
//            if(count>=3)
//            {
//                sum = sum + (count-2);
//                count = 0;
//            }
//
//            else
//            {
//                count=0;
//            }
//        }
//    }
//
//    printf("%d", sum);
//}


#include<stdio.h>
int main()
{
    int n, count=0;
    scanf("%d", &n);

    char arr[n];

    scanf("%s", arr);

    for(int i=0 ; i< (n-2) ; i++)
    {
        if(arr[i]=='x' && arr[i+1]=='x' && arr[i+2]=='x' )
        {
            count++;
        }
    }

    printf("%d", count);
}








