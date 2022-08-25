#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,d,temp;
        cin>>x>>y>>d;
        temp = abs(x-y);
        if(temp<=d)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
