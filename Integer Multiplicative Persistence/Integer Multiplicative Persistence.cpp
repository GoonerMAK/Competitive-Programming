#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string num;
        cin >> num;

        int digits;

        stringstream degree(num);

        degree >> digits;
        cout << digits << endl;

    }
}
