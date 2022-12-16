//#include<stdio.h>
//int main()
//{
//     int n,price,quality,i,d=0;
//     scanf("%d", &n);
//
//     for(i=0 ; i<n ; i++)
//     {
//            scanf("%d%d", &price, &quality);
//
//            if(price!=quality)
//            {
//                   d++;
//            }
//     }
//
////     printf("%d\n", d);
//
//     if(d==n)
//     {
//         printf("Happy Alex");
//     }
//
//     else
//     {
//         printf("Poor Alex");
//     }
//
//     return 0;
//}




#include<stdio.h>
int main()
{
	int n,a,b,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&a,&b);

	if(a!=b)
	{
	    printf("Happy Alex"); return 0;
    }

	}
	printf("Poor Alex");

	return 0;
}

