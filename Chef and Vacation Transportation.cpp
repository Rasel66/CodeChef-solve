#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,pb;
        cin>>x>>y>>z;
        pb = x + y;
        if(pb>z)
            cout<<"TRAIN"<<endl;
        else if(pb<z)
            cout<<"PLANEBUS"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
}
