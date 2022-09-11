#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int n,m,x,r;
        cin>>n>>m>>x;
        r= 2*n + 2*m;
        int result = r*x;
        cout<<result<<endl;
    }
}
