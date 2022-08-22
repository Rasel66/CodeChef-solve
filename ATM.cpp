#include<iostream>
#include<bits/stdc++.h>
//#include<iomanip>
using namespace std;
int main()
{

    int a;
    double b;

    cin>>a>>b;
    double x = b-a-0.5;
    if((a%5==0)&&(x>=0))
    {
        std::cout << std::fixed;
        std::cout<<std::setprecision(2)<<x<<endl;

    }
    else
    {
        std::cout << std::fixed;
        std::cout<<std::setprecision(2)<<b<<endl;
    }
}
