#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x1,x2,y1,y2,z1,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if(x1<=x2 && y1<=y2 && z1>=z2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
