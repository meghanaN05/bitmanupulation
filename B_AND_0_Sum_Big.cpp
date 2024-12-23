#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
const int MOD=1e9+7;
void solve() {
    int n,k;
    cin>>n>>k;
    int ans=1;
    for(int i=0;i<k;i++){
        ans=(ans*n)%MOD;
    }
   cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while (k--) {
        solve();
    }

    return 0;

}