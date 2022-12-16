#include<stdio.h>
int main()
{
    int n,i,pos=0,neg=0;
    int pos_position=1, neg_position=-1;
    long long int sum=0, pos_sum=0, neg_sum=0;

    scanf("%d", &n);

    long long int positions[n], trees[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld %lld", &positions[i], &trees[i]);

        if(positions[i]>0)
        {
            pos++;
            pos_sum = pos_sum + trees[i];
        }

        else
        {
            neg++;
            neg_sum= neg_sum + trees[i];
        }
    }

    if(pos > neg)
    {
         neg=neg+1;                                      // since positive is greater than negative he'll go right first and also he'll stop in a positive position
         while(neg>0)
         {
                for(i=0 ; i<n ; i++)
                {
                       if(positions[i]==pos_position)
                       {
                             sum = sum + trees[i];
                             neg--;
                             break;
                       }
                }
                pos_position++;
         }

         sum = sum + neg_sum;
         printf("%lld", sum);
         return 0;
    }

    else if(neg > pos)
    {
         pos=pos+1;                                      // since negative is greater than positive he'll go left first and also he'll stop in a negative position
         while(pos>0)
         {
                for(i=0 ; i<n ; i++)
                {
                       if(positions[i]==neg_position)
                       {
                             sum = sum + trees[i];
                             pos--;
                             break;
                       }
                }
                neg_position--;
         }

         sum = sum + pos_sum;
         printf("%lld", sum);
         return 0;
    }

    else
    {
        sum = neg_sum + pos_sum;
        printf("%lld", sum);
        return 0;
    }

}
