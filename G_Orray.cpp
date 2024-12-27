#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>vis(n,0);
    vector<int>ans;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mask=0,index=0;
    for(int i=30;i>=0;i--){
 int maxmask=mask;
 int index=-1;
 for(int j=0;j<n;j++){
    if(!vis[j] &&(a[j]|mask)>maxmask){
        maxmask=a[j]|mask;
        index=j;
    }
 }
 if(index==-1) break;
 vis[index]=1;
 ans.push_back(a[index]);
 mask |=maxmask;

    }
    for(int i=0;i<n;i++) if(!vis[i])  ans.push_back(a[i]);
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
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