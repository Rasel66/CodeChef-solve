#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        int s = y*(y+1)/2;
        if(x>=s)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
