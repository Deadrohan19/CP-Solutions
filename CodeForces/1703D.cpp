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

ll nCr(ll n, ll r){
	if(r>n)
		return -1;
	
	r = min(n-r, r);
	ll res =1;
	for(int i=0;i<r;++i){
		res *= (n-i);
		res /= (i+1);
	}
	return res;
}

void solve(){
	ll n;cin>>n;
	vector<string> v(n);
	for(auto &i: v)
		cin>>i;
	
	map<string,ll> mp;
	
	for(auto s: v)
		mp[s]++;
	
	vector<bool> ans(n,false);
	
	for(int i=0;i<n;++i){
		for(int j=0;j<v[i].size()-1;++j){
			if(mp[v[i].substr(0,j+1)] && mp[v[i].substr(j+1)]){
				ans[i]=true;
			}
		}
	}
	
	for(auto i: ans)
		if(i)
			cout<<"1";
		else
			cout<<"0";
		
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