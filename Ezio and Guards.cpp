#include<iostream>
using namespace std;
int main()
{
    int n,i,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<y)cout<<"NO"<<endl;
        else if(x>y)cout<<"YES"<<endl;
        else cout<<"YES"<<endl;
    }
}
