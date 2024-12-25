#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v )
    cin>>it;
    for(int i=1;i<=61;i++){
        int num=(1LL<<i);
        set<int>st;
        for(int j=0;j<n;j++){
            st.insert(v[j]%num);
        }
        if(st.size()==2){
            cout<<num<<endl;
            return;
        }
    }
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