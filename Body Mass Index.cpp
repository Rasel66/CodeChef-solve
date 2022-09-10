#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float h,m,bmi;
        cin>>m>>h;
        bmi = m/(h*h);
        if(bmi<=18)
            cout<<1<<endl;
        else if(19<=bmi && bmi<=24)
            cout<<2<<endl;
        else if(25<=bmi && bmi<=29)
            cout<<3<<endl;
        else
            cout<<4<<endl;
    }
}
