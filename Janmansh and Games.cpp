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
        if(x%2==0)
        {
            if(y%2==0)
            {
                cout<<"Janmansh"<<endl;
            }
            else
            {
                cout<<"Jay"<<endl;
            }
        }
        else
        {
            if(y%2==0)
            {
                cout<<"Jay"<<endl;
            }
            else
            {
                cout<<"Janmansh"<<endl;
            }
        }
    }
}
