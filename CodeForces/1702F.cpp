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
	ll n;cin>>n;
	
	map<ll, ll> mp;
	
	for(int i=0;i<n;++i){
		ll x;cin>>x;
		x /= lsb(x);
		mp[x]++;
	}
	
	vector<ll> v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
		v[i] /= lsb(v[i]);
	}
	
	
	for(int i=0;i<n;++i){
		while(mp[v[i]]==0 && v[i]>0){
			v[i]/=2;
		}
		if(v[i]==0){
			cout<<"NO\n";
			return;
		}
		mp[v[i]]--;
	}
	
	cout<<"YES\n";
	
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