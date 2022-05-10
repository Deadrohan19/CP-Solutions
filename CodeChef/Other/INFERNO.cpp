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
	int n,x;cin>>n>>x;
	
	ll arr[n];
	for(auto &i: arr)
		cin>>i;
	
	sort(arr,arr+n);
	ll ans = 0;
	for(auto i: arr){
		ans += ceil((float)i/x);
	}
	
	cout<<min(ans, arr[n-1])<<"\n";
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}