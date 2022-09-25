#include<iostream>
using namespace std;
int main()
{
    int t,n,k,arr[100];
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>k)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
