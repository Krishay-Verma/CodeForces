#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
#define dbg(x)
#endif

int x = 0;

void solve() {
    string X;
    cin >> X;
    if (X[0] == '+' || X[2] == '+') {
        ++x;
    } else {
        --x;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
    cout << x << endl;
}