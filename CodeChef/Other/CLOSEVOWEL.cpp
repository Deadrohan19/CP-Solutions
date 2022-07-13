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
#define mod 1000000007

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

ll cus_pow(ll n){
	
}


void solve(){
	ll n;cin>>n;
	string s;cin>>s;
	
	ll cnt =0;
	
	for(auto i: s)
		if(i=='c' || i=='g' || i=='l' || i=='r')
			cnt++;
	
	ll ans =1;
	
	for(int i=0;i<cnt;++i)
		ans = (ans * 2)% mod;
	
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