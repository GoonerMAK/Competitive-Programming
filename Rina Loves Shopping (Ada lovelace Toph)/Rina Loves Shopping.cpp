#include<iostream>
#include<climits>
using namespace std;

void max_sub_sum(long long a[], long long size);

int main()
{
    int tests, i;
    cin >> tests;
    for(i=0 ; i<tests ;i++)
    {
        long long n;
        cin >> n;
        long long a[n];

        for(int j=0 ; j<n ; j++)
        {
            cin>>a[j];
        }

        max_sub_sum(a, n);
    }

    return 0;
}


void max_sub_sum(long long a[], long long size)
{
    long long max_so_far = INT_MIN, max_ending = 0, start =0, end = 0, sum=0;

    for (int i=0; i< size; i++ )
    {
        max_ending = max_ending + a[i];

        if (max_so_far < max_ending)
        {
            max_so_far = max_ending;
            start = sum;
            end = i;
        }

        if (max_ending < 0)
        {
            max_ending = 0;
            sum = i + 1;
        }
    }
    cout<< max_so_far << endl;

}
