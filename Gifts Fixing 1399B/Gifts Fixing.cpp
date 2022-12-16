#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;

	cin>>t;

	while(t--)
	{
	    int n;
	    cin >> n;

	    int a[n],b[n];

	    for(int i=0;i<n;i++)
	    cin >> a[i];

	    for(int i=0;i<n;i++)
	    cin >> b[i];

	int min_a=*min_element(a,a+n);
	int min_b=*min_element(b,b+n);

	long long sum=0;

	for(int i=0;i<n;i++)
	{
		sum=sum+max(a[i]-min_a , b[i]-min_b);
	}

	cout << sum << endl;

	}

	return 0;
}
