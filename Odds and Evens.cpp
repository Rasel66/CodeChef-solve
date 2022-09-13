#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        if(x>=1 && x<=5 && y>=1 && y<=5)
        {
            int sum = x+y;
            if(sum%2==0)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else
            break;
    }
}
