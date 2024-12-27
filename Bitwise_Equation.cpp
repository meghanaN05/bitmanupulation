

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'


void solve(){
    ll n;
    cin>>n;
    ll a = (1LL<<36) + (1LL<<37);
    ll b = (1LL<<36);
    ll c = (1LL<<35);
    ll d = (1LL<<36)+(1LL<<35) + n;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
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