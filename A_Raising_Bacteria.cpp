#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int x;
   cin>>x;
   int cntbits=0;
   for(int i=0;i<32;i++){
    if(((1<<i)&x)>0){
        cntbits++;
    }
   }
   cout<<cntbits<<endl;

    return 0;

}