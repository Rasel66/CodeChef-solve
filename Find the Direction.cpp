#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4==0)
            cout<<"North"<<endl;
        else if(n%4==1)
            cout<<"East"<<endl;
        else if(n%4==2)
            cout<<"South"<<endl;
        else if(n%4==3)
            cout<<"West"<<endl;
    }
}
