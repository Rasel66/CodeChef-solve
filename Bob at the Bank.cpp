#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int d = y-x;
        int result = w-(d*z);
        cout<<result<<endl;
    }
}
