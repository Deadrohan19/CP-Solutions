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
	int n,m;cin>>n>>m;
	map<ll, ll> d1;
	map<ll, ll> d2;
	
	int arr[n][m];
	
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			cin>>arr[i][j];
			
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j){
			d1[i+j]+=arr[i][j];
			d2[i-j+200] += arr[i][j];
		}
	
	ll ans =0;
	
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			ans = max(ans, d1[i+j] + d2[i-j+200] -arr[i][j]);
		
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