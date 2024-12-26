#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int ans=0;
    int curpos=1;
    while(curpos<=n){
        int nxt=min(n,(curpos*2)-1);
        ans= max(ans,nxt-curpos+1);
        curpos*=2;
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