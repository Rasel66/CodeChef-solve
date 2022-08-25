#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--) {
	    int X,Y,A,B,gold_medals=0;
	    cin >> X >> Y >> A >> B;
	    if(X!=A && X!=B){
	        gold_medals++;
	    }

	    if(Y!=A && Y!=B){
	        gold_medals++;
	    }

	    cout << gold_medals << endl;
	}
	return 0;
}
