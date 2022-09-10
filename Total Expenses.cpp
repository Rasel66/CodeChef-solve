#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int q,p;
        double product;
        cin>>q>>p;
        cout<<fixed;
        product = q*p;
        if(q>1000)
        {
            double expense = product - (product*0.1);
            cout<<setprecision(6)<<expense<<endl;
        }
        else
        {
            cout<<setprecision(6)<<product<<endl;
        }
    }
}
