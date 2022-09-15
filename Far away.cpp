#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void func()
{
    long long n,m,min=1,sum=0;
    cin>>n>>m;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum += max(abs(arr[i]-1),abs(arr[i]-m));
    }
    cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        func();
    }
}
