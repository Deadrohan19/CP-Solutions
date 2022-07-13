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

ll lsb(ll x){return (x & -x);}

ll nCr(ll n, ll r){
	if(r>n)
		return -1;
	
	r = min(n-r, r);
	ll res =1;
	for(int i=0;i<r;++i){
		res *= (n-i);
		res /= (i+1);
	}
	return res;
}

void solve(){
	ll n,k;cin>>n>>k;
	string s;cin>>s;
	
	ll ans = INF;
	ll w_cnt=0;
	
	for(int i=0;i<k;++i){
		if(s[i]=='W')
			w_cnt++;
	}
	ans = min(w_cnt,ans);
	
	for(int i=k;i<n;++i){
		if(s[i-k]=='W')
			w_cnt--;
		if(s[i]=='W')
			w_cnt++;
		
		ans = min(w_cnt,ans);
	}
	
	cout<<ans<<"\n";
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