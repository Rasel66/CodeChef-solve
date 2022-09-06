#include<iostream>
using namespace std;
int main()
{
    int x;
    do
    {
        cin>>x;
        if(x!=42 && x<100 && x>(-100))
            cout<<x<<endl;
    }
    while(x!=42 && x<100 && x>(-100));
}
