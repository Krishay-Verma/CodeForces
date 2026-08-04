#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
#define dbg(x)
#endif

void solve() {
    int s, count = 1;
    cin >> s;
    string fs;
    cin >> fs;
    for (int i = 0; i > s; i++) {
        if (fs[i] != fs[i+1]) count++;
    }
} //To be Reviewed

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
}