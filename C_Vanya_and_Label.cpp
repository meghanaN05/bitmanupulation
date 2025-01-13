#include <iostream>
#include <stdio.h>
#include <string>
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll i,j,n,h,ans,x,cur_h,k;
string s;
string pattern;
ll symbol_val[305];
int main()
{
	cin >> s;
	for (char i = '0'; i <= '9'; i++)
		pattern.push_back(i);
	for (char i = 'A'; i <= 'Z'; i++)
		pattern.push_back(i);
	for (char i = 'a'; i <= 'z'; i++)
		pattern.push_back(i);
	pattern.push_back('-');
	pattern.push_back('_');
	for (i = 0; i < 64; i++)
		symbol_val[pattern[i]] = i;
	ll ans = 1;
	for (i = 0; i < s.size(); i++)
	{
		ll x = symbol_val[s[i]];
		for (j = 0; j < 6; j++)
			if ((x&(1<<j)) == 0)
			   ans = (ans*3)%MOD;
	}
	cout << ans << endl;
	return 0;
}
