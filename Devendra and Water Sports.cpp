#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;
        int expense = y+a+b+c;
        if(z>=expense)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
