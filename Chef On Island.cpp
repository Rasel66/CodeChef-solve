#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,x,y,d;
        float d1,d2;
        cin>>a>>b>>x>>y>>d;
        d1= a/x;
        d2= b/y;
        float minimum = min(d1,d2);
        if(minimum>=d)
            cout<<"Yes"<<endl;
        else if(minimum<d)
            cout<<"No"<<endl;

    }
}
