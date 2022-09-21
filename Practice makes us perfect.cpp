#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    int countt=0;
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
        if(arr[i]>=10)
        {
            countt++;
        }

    }
    cout<<countt<<endl;
}
