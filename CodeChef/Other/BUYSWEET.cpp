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

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void solve(){
	ll n,r;cin>>n>>r;
	
	ll a[n];
	for(auto &i: a)
		cin>>i;
	
	ll b[n];
	for(auto &i: b)
		cin>>i;
	
	
	vector<pair<ll, ll>> v;
	
	for(int i=0;i<n;++i){
		v.push_back({a[i]-b[i],a[i]});
	}
	
	sort(v.begin(), v.end());
	
	ll ans=0;
	
	for(auto p: v){
		if(p.S<=r){
			ll x =(r-p.S)/p.F;
			x++;
			ans += x;
			r -= p.F*x;
		}
	}
	
	
	 
	
	
	
	cout<<ans<<"\n";
	
	// cout<<"---"<<r<<"\n";
	// for(auto p: v)
	// 	cout<<p.F<<" "<<p.S<<"\n";
	
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}