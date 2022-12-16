#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, days, big=0, pos;
        cin >> n >> days;
        int a[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];

            if(a[i] > big)
            {
                big = a[i];
                pos = i+1;
            }
        }




        cout << pos << endl;
    }

    return 0;
}
