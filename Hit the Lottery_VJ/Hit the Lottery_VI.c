#include<stdio.h>
int main()
{
      long long int n,s100,s20,s10,s5,s1,s;

      scanf("%lld", &n);

      s100=n/100;
      n=n-(s100*100);

      s20=n/20;
      n=n-(s20*20);

      s10=n/10;
      n=n-(s10*10);

      s5=n/5;
      n=n-(s5*5);

      s1=n/1;
      n=n-(s1*1);

      s=s1+s5+s10+s20+s100;

      printf("%lld", s);

      return 0;
}
