#include<stdio.h>
int main()
{
  int a,b,c,s1,s2,s3,s4,s5,s6;

  scanf("%d%d%d", &a, &b, &c);

  s1=a+b+c;
  s2=a*b*c;
  s3=(a*b)+c;
  s4=a*(b+c);
  s5=a+(b*c);
  s6=(a+b)*c;

  if(s1>s2 && s1>s3 && s1>s4 && s1>s5 && s1>s6)
     printf("%d", s1);

  else if(s2>s3 && s2>s4 && s2>s5 && s2>s6)
     printf("%d", s2);

  else if(s3>s4 && s3>s5 && s3>s6)
     printf("%d", s3);

  else if(s4>s5 && s4>s6)
     printf("%d", s4);

  else if(s5>s6)
     printf("%d", s5);

  else
     printf("%d", s6);


  return 0;
}
