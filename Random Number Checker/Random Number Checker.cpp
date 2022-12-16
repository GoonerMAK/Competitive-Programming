#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, Count = 0;;
    cin >> t;
    while(t--)
    {
        cin >> n;

        ( (n%2==0) ? Count++ : Count-- );
    }


    ( (Count >= -1 && Count <= 1) ? puts("Good") : puts("Not Good") );

    return 0;
}
