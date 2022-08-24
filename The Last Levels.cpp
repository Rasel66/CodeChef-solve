#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a = x/3;
        if(x%3==0)
            cout<<x*y+(a-1)*z<<endl;
        else
            cout<<x*y+a*z<<endl;
    }
}
