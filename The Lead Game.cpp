#include <iostream>
using namespace std;

int main() {

	int  t,l,fl,p1,p2,a=0,b=0;
	cin>>t;
	while(t--)
	{
	    cin>>p1>>p2;
	    a+=p1;
	    b+=p2;
	    if(a>b)
	    {
	        int lead;
	        lead=a-b;
	        if(lead>fl)
	        {
	            fl=lead;
	            l=1;
	        }
	    }

	    else
	    {
	        int lead;
	        lead=b-a;
	        if(lead>fl)
	        {
	            fl=lead;
	            l=2;
	        }
	    }
	}
	cout<<l<<" "<<fl<<endl;
	return 0;
}
