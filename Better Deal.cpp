#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b;
        cin>>a>>b;
        x = x-a;
        y = y-2*b;
        if(x>y)
            cout<<"SECOND"<<endl;
        else if(x==y)
            cout<<"BOTH"<<endl;
        else
            cout<<"FIRST"<<endl;
    }
}
