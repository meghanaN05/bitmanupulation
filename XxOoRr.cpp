#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=0;
    for(int i=30;i>=0;i--){
        int temp=0;
        for(int j=0;j<n;j++){
            if((arr[j]&(1<<i))>0){
                temp++;
            }
        }
        ans+=(temp+k-1)/k;
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