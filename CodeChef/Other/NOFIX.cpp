#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	
	ll x=0;
	for(int i=0;i<n;++i){
		if((arr[i]-i-1-x)!=0)
			continue;
		x++;
	}
	cout<<x<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}