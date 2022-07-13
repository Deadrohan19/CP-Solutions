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
	
	if(n!=131072){
		for(ll i=1;i<=n;++i)
			cout<<i<<" ";
		cout<<"\n";
		for(ll i=1;i<=n;++i)
			cout<<i+131072<<" ";
		cout<<"\n";
	}
	else{
		for(ll i=1;i<=n-2;++i)
			cout<<i<<" ";
		cout<<"262145 262146";
		cout<<"\n";
		for(ll i=1;i<=n-2;++i)
			cout<<i+131072<<" ";
		cout<<"262149 262150\n";
	}
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}