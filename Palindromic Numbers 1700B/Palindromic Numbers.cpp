#include<bits/stdc++.h>

using namespace std;

int DigitCount(int num)
{
    int cnt = 0;
    for(int i=0;;i++)
    {
        int rem = num%10;
        num = num/10;
        cnt++;
        if(num == 0)
            break;
    }

    return cnt;
}

void Solve()
{
    int n, x;
    string s;
    cin>>n>>s;

    x = stoi(s);              ///  string to integer
    int cnt = pow(10, n-1);
    x += cnt;

    int a[100000];
    for(int i=0;;i++)
    {
        x++;
        cnt++;
        int y = x;
        int z = DigitCount(y);
        for(int j=z-1; j>=0; j--)
        {
            a[j] = y%10;
            y = y/10;
        }

        int f = 0;
        for(int j=0, k=z-1; j<z && k>=0; j++,k--)
        {
            if(a[j] == a[k])
                f = 0;
            else
            {
                f = 1;
                break;
            }
        }

        if(f==0)
            break;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        Solve();
    }
    return 0;
}
