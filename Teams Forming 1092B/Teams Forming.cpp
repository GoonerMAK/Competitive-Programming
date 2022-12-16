#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);               /// sorting the array in an ascending order

    for(int i=0 ; i<n ; )
    {
        ans = ans + arr[i+1] - arr[i];         ///  adding the difference of two students each time (the amount of problems that the less skilled student has to solve)
        i = i + 2;                            ///   adding 2 each time cause each team is of two students
    }

    cout << ans << endl;

    return 0;
}


///  A team consists of two same skilled students (a student increases his/her skill by solving a problem)
