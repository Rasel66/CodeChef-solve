#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[7];

    while(n--)
    {
        int ans1=0,ans2=0;
        for(int i=0;i<7;i++)
        {

            cin>>a[i];
            if(a[i]==1)
            {
                ans1++;
            }
            else
                ans2++;
        }
        if(ans1>ans2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
