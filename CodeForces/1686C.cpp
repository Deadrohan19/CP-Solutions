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
#define MOD 1000000007
#define dbg(x) cout << x << "\n";

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

// ll lsb(ll x){return (x & -x)};

void solve(){
	ll n;cin>>n;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	
	if(n&1){
		cout<<"NO\n";
		return;
	}
	
	sort(v.begin(), v.end());
	ll mid = n/2;
	
	map<ll,ll> mp;
	for(auto i: v)
		mp[i]++;
	ll mx =1;
	for(auto p: mp){
		mx = max(mx, p.S);
	}
	
	if(mx>mid){
		cout<<"NO\n";
		return;
	}
	if(mx==mid && (v[0] != v[mid-1]) && (v[mid] != v[n-1])){
		cout<<"NO\n";
		return;
	}
	
	cout<<"YES\n";
	for(int i=0;i<mid;++i){
		cout<<v[i]<<" "<<v[mid+i]<<" ";
	}
	cout<<"\n";
	
}


int main(){
	deadman
	cout << fixed << setprecision(15);
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}