#include <iostream>
#include<map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    map<int,int>m;

	    int ma =0;
	    for(auto i:arr)
	    {
	        m[i]++;
	        ma = max(ma , m[i]);
	    }
	    cout<<n-ma<<endl;

	}
	return 0;
}
