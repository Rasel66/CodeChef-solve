#include<iostream>
using namespace std;
void solve()
{
    int f,s;
    cin>>f>>s;
    int mx=max(f,s);
    if(mx==f)cout<<"First\n";
    else if(mx==s)cout<<"Second\n";
    else cout<<"ANY\n";
}
int main()
{
    int n;
    cin>>n;
    while(n--){
    solve();
   }
   return 0;
}
