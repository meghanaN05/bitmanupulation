#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> cnt(31, 0);
    int ans = 0;

    for (int i = 30; i >= 0; i--) {
        int temp = 0;
        for (int j = 0; j < n; j++) {
            if ((arr[j] & (1 << i)) > 0) {  // Corrected precedence
                temp++;
            }
        }
        cnt[i] = n - temp;
    }

    for (int i = 30; i >= 0; i--) {
        if (cnt[i] <= k) {
            k -= cnt[i];
            ans |= (1 << i);
        }
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;  // Fixed input for test cases

    while (t--) {
        solve();
    }

    return 0;
}
