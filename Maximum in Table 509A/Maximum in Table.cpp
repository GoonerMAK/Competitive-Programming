#include<iostream>
using namespace std;

int highest_number(int r, int c)
{
        if(r==1 || c==1)
        {
            return 1;
        }

        else
        {
            return highest_number(r-1, c) + highest_number(r, c-1);         /// recursion
        }
}

int main()
{
    int n;
    cin >> n;

    cout << highest_number(n, n) << endl;

    return 0;
}
