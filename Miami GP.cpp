#include<iostream>
using namespace std;
int main()
{
    int n,i,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if((x*1.07)>=y)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
