#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k,d;
        cin>>n>>x>>k;
        d = k/x;
        if(x>k || d<=n)
            cout<<d<<endl;
        else
            cout<<n<<endl;
    }
}
