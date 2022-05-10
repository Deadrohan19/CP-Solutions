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
	ll n;cin>>n;
	string s;cin>>s;
	
	ll ans=0;
	
	vector<ll> v;
	int x=1;
	for(int i=1;i<n;++i){
		if(s[i]!=s[i-1]){
			v.pb(x);
			x=1;
		}
		else
			x++;
	}
	v.pb(x);
	
	for(int i=0;i<v.size();++i){
		if(v[i]&1){
			ans++;
			i++;
			while(v[i]%2==0){
				i++;
				ans++;
			}
		}
	}	
	
	// for(auto i: v)
	// 	cout<<i<<" ";
	
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