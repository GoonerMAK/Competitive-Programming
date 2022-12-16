#include<stdio.h>
int main()
{
    int x, y, z;
    int sumX=0, sumY=0, sumZ=0;
    int num;
    scanf("%d", &num);

    while(num--)
    {
        scanf("%d %d %d", &x, &y, &z);
        sumX = sumX + x;
        sumY = sumY + y;
        sumZ = sumZ + z;
    }

    printf( (sumX==0 && sumY==0 && sumZ==0) ? "YES" : "NO" );

    return 0;
}






///     Input in 2D array    ///

//#include<stdio.h>
//int main()
//{
//    int x=0, y=0, z=0;
//    int num;
//    scanf("%d", &num);
//    int arr[num][3];
//
//    for(int i=0 ; i<num ; i++)
//    {
//         for(int j=0 ; j<3 ; j++)
//         {
//             scanf("%d", &arr[i][j]);
//
//             if(j==1)
//             {
//                 x = x + arr[i][j];
//             }
//
//             else if(j==2)
//             {
//                 y = y + arr[i][j];
//             }
//
//             else
//             {
//                 z = z + arr[i][j];
//             }
//         }
//    }
//
//    if((x+y+z)==0)
//    {
//        printf("YES");
//    }
//
//    else
//    {
//        printf("NO");
//    }
//
//    return 0;
//}
