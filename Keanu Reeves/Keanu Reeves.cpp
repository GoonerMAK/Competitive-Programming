#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n, zero=0, one=0;
      cin >> n;
      string s;
      cin >> s;

      for(int i=0; i<n ; i++)
      {
          if(s[i] == '1')
          {
              one++;
          }

          else
          {
              zero++;
          }
      }

      if(zero != one)                     ///  since the string is "not good"... so we don't have to cut it
      {
          cout << "1\n" << s << endl;
      }

      else
      {
          cout << "2\n" << s[0] << " " << s.substr(1, n) << endl;          ///  .substr(1, n) will print the substring from index 1 to n
      }


    return 0;
}


///   strings ( .substr() )
