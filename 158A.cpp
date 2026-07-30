#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int t = a[k-1];
    int result = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= t && a[i] > 0) result++;
    }
    cout << result;
    return 0;
}