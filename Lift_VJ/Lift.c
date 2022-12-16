#include<stdio.h>
int main()
{
  int a,b,i,T,s1,s2,s3;
  scanf("%d", &T);
  for(i=1 ; i<=T ; i++)
   {
     scanf("%d%d", &a, &b);

     if(b>a)
       {
        s1=(((b-a)*4)+11+(a*4)+8);
        printf("Case %d: %d\n", i, s1);
       }
     if(a>b)
       {
        s2=(((a-b)*4)+11+(a*4)+8);
        printf("Case %d: %d\n", i, s2);
       }
     if(a==b)
       {
        s3=(11+(a*4)+8);
        printf("Case %d: %d\n", i, s3);
       }


   }

  return 0;
}
