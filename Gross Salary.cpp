#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x,salary;
        cin>>x;
        if(x<1500)
        {
            salary = x + 0.1* x + 0.9* x;
            cout <<fixed;
            cout << setprecision(2) << salary << endl;
        }
        else if(x>=1500)
        {
            salary = x + 500 + 0.98* x;
            cout<<fixed;
            cout<<setprecision(2)<<salary<<endl;
        }
    }
}
