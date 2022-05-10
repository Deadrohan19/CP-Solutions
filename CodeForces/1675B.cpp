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
	ll arr[n];
	for(auto &i: arr)
		cin>>i;
	ll mx = arr[n-1];
	ll ans =0;
	for(int i=n-2;i>=0;--i){
		if(arr[i]>=mx){
			ans++;
			ll temp =mx;
			mx = arr[i]/2;
			
			if(temp==0){
				cout<<"-1\n";
				return;
			}
			
			while(mx>=temp){
				ans++;
				mx /=2;
			}
			
		}
		else
			mx = arr[i];
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