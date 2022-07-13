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
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

void solve(){
	ll n;cin>>n;
	ll A[n];
	for(auto &i: A)
		cin>>i;
	ll B[n];
	for(auto &i: B)
		cin>>i;
	
	map<pair<ll,ll>,ll> mp;
	
	for(int i=1;i<n;++i){
		mp[{A[i],B[i]}]++;
	}
	
	
	ll ans =mp[{B[0],A[0]}];
	
	
	
	for(int i=1;i<n-1;++i){
		mp[{A[i],B[i]}]--;
		
		int x = mp[{B[i],A[i]}];
		
		ans += x;
	}
	
	cout<<ans<<"\n";
	
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}