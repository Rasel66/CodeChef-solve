#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int s=0;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        if(x%n==0)
            s++;
    }
    cout<<s<<endl;
}
