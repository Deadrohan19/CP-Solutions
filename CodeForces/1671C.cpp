#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	ll n,x;cin>>n>>x;
	vector<ll> vec(n);
	for(auto &i: vec)
		cin>>i;
	
	sort(vec.begin(), vec.end());
	
	ll ans =0;
	for(int i=0;i<n;++i){
		if(x>=vec[i]){
			ans++;
			x-=vec[i];
			ans += x/(i+1);
		}
		else
			break;
	}
	
	cout<<ans<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}
