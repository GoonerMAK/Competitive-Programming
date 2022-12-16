#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;

    int Max = max(a, b);

    while(1)
    {
        if( Max%a==0 && Max%b==0 )
        {
            cout << Max << endl;
            return 0;
        }

        Max++;
    }
}
