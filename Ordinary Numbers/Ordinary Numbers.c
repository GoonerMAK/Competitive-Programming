#include<stdio.h>
#include<math.h>
int main()
{
    int t, i, remainder, digit=0, ans=0;
    long long int temp, num, sum=0;
    scanf("%d", &t);

    while(t--)
    {
         scanf("%lld", &num);

         if(num>=1 && num<=9)
         {
             printf("%lld\n", num);
         }

         else
         {
             temp = num;
             while(temp>0)
             {
                 remainder = temp%10;
                 digit++;
                 temp = temp/10;
             }

             for(i=(digit-1) ; i>=0 ; i--)
             {
                 sum = sum + (pow(10,i))*remainder ;
             }

             ans = (digit-1)*9 + remainder ;

             if(num < sum)
             {
                 ans--;
             }
             printf("%d\n", ans);
             sum=0;
             digit=0;
             ans=0;
         }

    }

    return 0;
}


//#include<stdio.h>
//int main()
//{
//	int tests;
//	scanf("%d",&tests);
//
//	while(tests--)
//	{
//		long long int num;
//		scanf("%lld",&num);
//		int i, count =0;
//
//		for(i=1 ; i<=9 ; i++)
//		{
//			long long int temp=i;
//
//			while(num >= temp)
//			{
//				count++;
//				temp = temp*10 + i;
//			}
//		}
//		printf("%d\n",count);
//	}
//
//	return 0;
//}

