#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,x,y;
        cin>>a>>b>>c>>d;
        x = abs(a-c);
        y = abs(b-d);

        if(x>y)
            cout<<x<<endl;
        else
            cout<<y<<endl;
    }
}
