#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,m,d;
        cin>>x>>m>>d;
        int result = min(x*m,x+d);
        cout<<result<<endl;
    }
}
