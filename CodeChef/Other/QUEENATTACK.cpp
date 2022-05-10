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
	ll n,x,y;cin>>n>>x>>y;
	
	ll ans = 2*(n-1);
	ans += min(x-1,y-1);
	ans += min(n-x,n-y);
	ans += min(x-1,n-y);
	ans += min(n-x,y-1);
	
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