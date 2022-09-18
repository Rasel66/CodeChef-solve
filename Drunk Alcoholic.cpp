#include <bits/stdc++.h>
using namespace std;
int main() {

        long long t;
        cin >> t;

        int sum = 0;
        while (t--) {
                bool f = 1;
                int k;
                cin >> k;
                sum += k;

                long long ans = 0;

                while (k--) {
                        ans += f ? 3 : -1;
                        f = !f;
                }
                cout << ans << '\n';
        }
}
