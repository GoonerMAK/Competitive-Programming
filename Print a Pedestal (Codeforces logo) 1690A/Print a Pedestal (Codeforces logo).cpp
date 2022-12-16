#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, temp, h1, h2, h3;
        cin >> n;

        if(n%3 != 0)
        {
            temp = (3 - n%3) + n;

            h1 = temp/3 + 1;

            h2 = h1 - (3 - n%3);

            h3 = n - (h1 + h2);
        }

        else
        {
            h1 = n/3 + 1;

            h2 = h1 - 1;

            h3 = h2 - 1;
        }


        cout << h2 << " " << h1 << " " << h3 << endl;
    }

    return 0;
}
