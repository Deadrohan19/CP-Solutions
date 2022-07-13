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

bool cmp1(pair<ll, ll>& a, pair<ll, ll>& b){
	return a.F<b.F;
}

bool cmp2(pair<ll, ll>& a, pair<ll, ll>& b){
	return a.S<b.S;
}

void solve(){
	string s;cin>>s;
	ll n = s.size();
	ll k;cin>>k;
	
	vector<pair<ll, ll>> v;
	
	for(int i=0;i<n;++i){
		v.pb({s[i],i});
	}
	ll sum =0;
	for(auto p: v){
		sum+= p.F-96;
	}
	
	if(sum<=k){
		cout<<s<<"\n";
		return;
	}
	
	sort(v.begin(), v.end(),cmp1);
	
	
	for(int i=n-1;i>=0;--i){
		sum-=v[i].F-96;
		v[i].S = 1e9;
		if(sum<=k)
			break;
	}
	
	sort(v.begin(), v.end(),cmp2);
	
	
	for(auto p: v){
		if(p.S==1e9)
			break;
		cout<<(char)p.F;
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