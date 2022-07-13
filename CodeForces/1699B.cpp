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
	ll n,m;cin>>n>>m;
	
	vector<int> a;
	for(int i=0;i<m/2;++i){
		if(i&1){
			a.pb(0);
			a.pb(1);
		}		
		else{
			a.pb(1);
			a.pb(0);
		}
	}
	vector<int> b;
	for(int i=0;i<m/2;++i){
		if(i&1){
			b.pb(1);
			b.pb(0);
		}		
		else{
			b.pb(0);
			b.pb(1);
		}
	}
	
	for(int i=0;i<n/2;++i){
		if(i&1){
			for(auto i: b)
				cout<<i<<" ";
			cout<<"\n";
			for(auto i: a)
				cout<<i<<" ";
			cout<<"\n";
		}
		else{
			for(auto i: a)
				cout<<i<<" ";
			cout<<"\n";
			for(auto i: b)
				cout<<i<<" ";
			cout<<"\n";

		}
	}
	
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