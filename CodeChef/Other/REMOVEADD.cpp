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
#define dbg(x) cout <<"dbg: "<< x << "\n";

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

ll lsb(ll x){return (x & -x);}

void solve(){
	ll n;cin>>n;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	
	ll l_ans=n,r_ans=n;
	if(1){
		map<ll,ll> mp;
		for(auto i: v){
			if(mp[i])
				break;
			else
				--l_ans;
			mp[i]++;
		}
	}
	
	if(1){
		map<ll,ll> mp;
		for(int i=n-1;i>=0;--i){
			if(mp[v[i]])
				break;
			else
				--r_ans;
			mp[v[i]]++;
		}
	}
	
	map<ll,ll> mp;
	ll j=0,ans=INF;
	for(ll i=0;i<n;++i){
		if(mp[v[i]]){
			ll L = j, R = n-i;
			ll temp = 2*min(L,R) + max(L,R);
			ans = min(ans,temp);
			
			while(v[j] != v[i]){
				--mp[v[j]];
				j++;
			}
			--mp[v[j]];
			j++;
		}
		mp[v[i]]++;
	}
	cout<<min({l_ans, r_ans, ans})<<"\n";
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