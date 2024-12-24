#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>needed(n,0);
    for(int j=0;j<30;j++){
        bool found =0;
        for(int i=0;i<n;i++){
            if(a[i]&(1<<j) && found==0){
                found=1;
            }
           else if(found && ((a[i])&(1<<j))==0){
                needed[i]+=(1<<j);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<needed[i]<<' ';
    }
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