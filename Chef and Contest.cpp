#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        int ct,cft;
        ct = x + p*10;
        cft = y + q*10;
        if(ct>cft)
            cout<<"Chefina"<<endl;
        else if(ct<cft)
            cout<<"Chef"<<endl;
        else
            cout<<"Draw"<<endl;
    }
}
