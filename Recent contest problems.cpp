#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0,d=0;
        string s;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s;
            if(s=="START38")
            {
                c++;
            }
            else if(s=="LTIME108")
            {
                d++;
            }
        }
        cout<<c<<" "<<d<<endl;
    }
}
