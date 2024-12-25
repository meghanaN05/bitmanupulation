#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<"No"<<endl;
        return;
    }
    if(m%2){
        if(n%2==0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1 ";
            }
            cout<<m-(n-1)<<endl;
        }
        return;
    }
    if(m%2==0){
        if(n%2==1){
            cout<<"Yes"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1 ";
            }
            cout<<m-(n-1)<<endl;
            
        }
        else{
            cout<<"Yes"<<endl;
                        for(int i=0;i<n-2;i++){
                cout<<"1 ";
            }
            cout<<(m-(n-2))/2<< " " <<(m-(n-2))/2<<endl;


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