#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && a<c)
            cout<<"Draw"<<endl;
        else if(b<a && b<c)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}
