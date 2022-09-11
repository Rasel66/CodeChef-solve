#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //
        float a,x,b,y;
        float alice,bob;
        cin>>a>>x>>b>>y;
        cout<<fixed;
        alice = a/x;
        cout<<fixed;
        bob = b/y;
        if(alice>bob)
            cout<<"Alice"<<endl;
        else if(alice<bob)
            cout<<"Bob"<<endl;
        else if(alice==bob)
            cout<<"Equal"<<endl;
    }
}
