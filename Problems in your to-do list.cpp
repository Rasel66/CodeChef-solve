#include<iostream>
using namespace std;
int main()
{
    int t,n,i,arr[1000],countt=0;
    cin>>t;
    while(t--)
    {
        countt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=1000)
            {
                countt++;
            }
        }
        cout<<countt<<endl;
    }
}
