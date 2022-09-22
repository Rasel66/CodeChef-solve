#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,c=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            int rem = i%10;
            if(rem==2 || rem==3 || rem==9)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
