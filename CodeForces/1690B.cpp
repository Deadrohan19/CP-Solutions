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
	
	vector<ll> a(n);
	for(auto &i: a)
		cin>>i;
	
	vector<ll> b(n);
	for(auto &i: b)
		cin>>i;
	
	bool flag = true;
	
	ll mn = -1;
	
	vector<ll> zeros;
	
	for(int i=0;i<n;++i){
		ll x = a[i]-b[i];
		if(x<0){
			cout<<"NO\n";
			return;
		}
		if(b[i]==0){
			zeros.pb(x);
			continue;
		}
		
		if(mn==-1){
			mn = x;
		}
		else{
			if(mn!=x){
				cout<<"NO\n";
				return;
			}
		}
	}
	
	for(auto i: zeros){
		if(i>mn && mn!=-1){
			cout<<"NO\n";
			return;
		}
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