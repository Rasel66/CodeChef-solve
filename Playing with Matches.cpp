#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,m=0;
        cin>>a>>b;
        c = a + b;
        string s = to_string(c);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0'||s[i]=='6'||s[i]=='9')
                m+=6;
            else if(s[i]=='2'||s[i]=='3'||s[i]=='5')
                m+=5;
            else if(s[i]=='1')
                m+=2;
            else if(s[i]=='4')
                m+=4;
            else if(s[i]=='7')
                m+=3;
            else if(s[i]=='8')
                m+=7;
        }
        cout<<m<<endl;
    }
}
