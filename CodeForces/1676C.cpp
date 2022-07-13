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
	vector<string> v(n);
	for(auto &i: v)
		cin>>i;
	
	int ans = INT_MAX;
	
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			int temp=0;
			for(int k=0;k<m;++k)
				temp+= abs(v[i][k]-v[j][k]);
			ans = min(temp, ans);
		}
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