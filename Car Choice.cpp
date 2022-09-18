#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,x,y;
        cin>>a>>b>>x>>y;
        if(x/a < y/b)
            cout<<"-1"<<endl;
        else if(x/a > y/b)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
}
