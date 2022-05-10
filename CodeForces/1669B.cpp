#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	ll n;cin>>n;
	map<ll,ll> m;
	
	for(int i=0;i<n;++i){
		ll x;cin>>x;
		m[x]++;
	}
    map<ll, ll>::iterator it=m.end();
    
    for(auto p: m){
    	if(p.second>=3){
    		cout<<p.first<<"\n";
    		return;
    	}
    }
    cout<<"-1\n";

}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}