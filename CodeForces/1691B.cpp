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

ll lsb(ll x){return (x & -x);}

void solve(){
	ll n;cin>>n;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	
	map<ll,ll> mp;
	
	for(int i=0;i<n;++i)
		mp[v[i]]++;
	
	vector<ll> ans;
	
	ll prev =0;
	for(auto p: mp){
		if(p.S==1){
			cout<<"-1\n";
			return;
		}
		ans.pb(prev+p.S);
		for(int i=prev+1;i<prev+p.S;++i)
			ans.pb(i);
		
		prev+=p.S;
	}
	 
	for(auto i: ans)
		cout<<i<<" ";
	
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