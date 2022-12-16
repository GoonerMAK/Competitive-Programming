#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, ram;              /// n = pieces of software, ram = existing ram
        cin >> n >> ram;

        int arr1[n], arr2[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr1[i];
        }

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr2[i];
        }

        for(int i=0 ; i<n ; i++)
        {
            if( ram >= arr1[i] )
            {
                ram = ram + arr2[i];
                arr1[i] = 100000000;                       ///  bubble sort
                i = -1;                              ///   so that the loop iterates from the start again (i will become 0 again)
            }

        }

        cout << ram << endl;
    }

    return 0;
}

//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int tc;
//	cin>>tc;
//	while(tc--){
//	    int n, k;
//	    cin>>n>>k;
//	    pair<int, int> a[n];
//	    for(auto &x: a)
//	        cin>>x.first;
//	    for(auto &x: a)
//	        cin>>x.second;
//        sort(a, a+n);
//        for(int i=0;i<n;i++)
//            if(k>=a[i].first)
//                k+=a[i].second;
//        cout<<k<<endl;
//	}
//}

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n, k;
//		cin>>n>>k;
//		vector<pair<int, int>> a(n);
//		for(int i=0; i<n; i++)
//			cin>>a[i].first;
//		for(int i=0; i<n; i++)
//			cin>>a[i].second;
//		sort(a.begin(), a.end());
//		for(int i=0; i<n; i++)
//		{
//			if(k>=a[i].first) k+=a[i].second;
//			else break;
//		}
//		cout<<k<<endl;
//	}
//}
