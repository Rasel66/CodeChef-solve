#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,s;
        cin>>a>>b;
        s = a + b;
        if(s<3)
            cout<<1<<endl;
        else if(3<=s && s<=10)
            cout<<2<<endl;
        else if(11<=s && s<=60)
            cout<<3<<endl;
        else if(60<s)
            cout<<4<<endl;
    }
}
