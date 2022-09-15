#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>=1 && x<=50)
        {
            cout<<"LEFT"<<endl;
        }
        else if(x>50 && x<=100)
        {
            cout<<"RIGHT"<<endl;
        }
    }
}
