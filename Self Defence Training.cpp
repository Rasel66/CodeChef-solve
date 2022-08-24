#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            if(x>=10 && x<=60)
                count++;
        }
        cout<<count<<endl;
        count = 0;
    }

}
