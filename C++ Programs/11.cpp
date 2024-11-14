#include <bits/stdc++.h>

using namespace std;

long long sq(int x) {
    return (long long) x * x;
}

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int xs, ys, xt, yt;
    cin >> xs >> ys >> xt >> yt;
    long long d = sq(xs - xt) + sq(ys - yt);
    for (int i = 0; i < n; i++) {
        if (d >= sq(xt - x[i]) + sq(yt - y[i])) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
