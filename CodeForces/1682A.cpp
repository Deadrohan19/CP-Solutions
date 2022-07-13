#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define F first
#define S second
#define pb push_back
#define INF LLONG_MAX
#define MOD 1000000007
#define dbg(x) cout << x << "\n";

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

void solve(){
	ll n;cin>>n;
	string s;cin>>s;
	
	ll cnt=0;
	for(int i=n/2;i>=0;--i){
		if(s[i]==s[n/2])
			cnt++;
		else
			break;
	}
	for(int i=n/2+1;i<n;++i){
		if(s[i]==s[n/2])
			cnt++;
		else
			break;
	}
	if(cnt==0 && (n&1))
		cout<<1;
	else
		cout<<cnt;
	cout<<"\n";
}


int main(){
	deadman
	cout << fixed << setprecision(15);
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}