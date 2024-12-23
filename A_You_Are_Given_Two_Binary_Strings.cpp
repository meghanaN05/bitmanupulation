#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string x,y;
    cin>>x>>y;
    int pos_x=0,pos_y=0;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    for(int i=0;i<y.size();i++){
        if(y[i]=='1'){
            pos_y=i;
            break;
        }
    }
    for(int i=pos_y;i<x.size();i++){
        if(x[i]=='1'){
            pos_x=i;
            break;
        }
    }
    cout<<pos_x-pos_y<<endl;

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