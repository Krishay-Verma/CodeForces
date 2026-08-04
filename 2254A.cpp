#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int rounds = 0;
    while (a != b && b != c && a != c) {
        int mx = max({a, b, c}), mn = min({a, b, c});
        if (a == mx) a--; else if (b == mx) b--; else c--;
        if (a == mn) a++; else if (b == mn) b++; else c++;
        rounds++;
    }
    cout << rounds << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}