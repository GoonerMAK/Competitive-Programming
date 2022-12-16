#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, len, sum=0;
        cin >> n >> len;
        int str[7] = {0}, arr[7] = { 64, 32, 16, 8, 4, 2, 1 };

        for(int i=0 ; i<n ; i++)
        {
            int num, base = 64, d=0;

            cin >> num;

            while(num>0)
            {
                if(num>=base)
                {
                    str[d]++;
                    d++;
                    num = num - base;
                }

                else
                {
                    str[d]--;
                    d++;
                }

                base = base/2;
            }
        }

//        cout << "The string is" ;
//
//        for(int i=0 ; i<7 ; i++)
//        {
//            cout << " " << str[i];
//        }

        for(int i=0 ; i<7 ; i++)
        {
            if(str[i] > 0 )
            {
                sum = sum + arr[i];
            }
        }

        cout << sum << endl;
    }

    return 0;
}
