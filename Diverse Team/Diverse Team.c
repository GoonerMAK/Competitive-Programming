//#include<stdio.h>
//int main()
//{
//    int n, team, i, j, k=0, ans=0, count=0;
//
//    scanf("%d %d", &n, &team);
//
//    int arr[n];
//
//    for(i=0 ; i<n ; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for(i=0 ; i<n ; i++)
//    {
//         for(j=i+1 ; j<n ; j++)
//         {
//              if(arr[i]==arr[j])                     //  taking one indice and checking if any other indices have the
//              {                                      //  same value. Basically checking if arr[i] is distinct or not..
//                  count++;
//                  break;
//              }
//         }
//
//          printf("count: %d\n", count);
//         if(count==0)                                //  if the count is 0 then arr[i] can be deemed to be distinct
//         {
//             ans++;
//             arr[k] = i;
//             k++;
//         }
//         count=0;
//    }
//
//    if(ans>=team)
//    {
//        printf("YES\n");
//
//        for(i=0 ; i<team ; i++)
//        {
//            printf("%d ", arr[i]+1);
//        }
//    }
//
//    else
//    {
//        printf("NO");
//    }
//
//    return 0;
//}




#include<stdio.h>
int main()
{
    int n, team, value, i, ans=0;

    scanf("%d %d", &n, &team);

    int arr[n], all[101]={0};                   //  initializing all the possibles values' indices to 0

    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &value);

        all[value]++;                          //  incrementing all[value] by one

        if( all[value]==1 )                    //  making sure only distinct numbers' position gets stored in another array
        {
            arr[ans]=i;
            ans++;
        }

    }

    if(ans>=team)
    {
        printf("YES\n");

        for(i=0 ; i<team ; i++)
        {
            printf("%d ", arr[i]+1);             //  adding one because of array's indexing
        }
    }

    else
    {
        printf("NO");
    }

    return 0;
}

