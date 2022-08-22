#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;

        if(x>y)
        {
            int z = x-y;
            cout<<z<<endl;
        }
        else if(x<y)
        {
            int z = y-x;
            cout<<z<<endl;
        }
    }
    return 0;
}
