#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if((a+c)<=b)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }

}
