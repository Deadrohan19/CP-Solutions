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

ll power(ll a, ll b) {
	ll res = 1;
	a = a % MOD;
	while (b > 0) {
		if (b & 1) {res = (res * a) % MOD; b--;}
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}

void solve(){
	ll n;cin>>n;
	if(n==1){
		cout<<"1\n1\n";
		return;
	}
	if(n&1){
		cout<<"-1\n";
		return;
	}
	
	vector<pair<ll, ll>> v;
	ll nxt = n;
	while(1){
		int lg = log2(nxt);
		ll lower = power(2,lg)-1;
		ll diff = nxt - lower;
		nxt = lower - diff;
		
		v.pb({nxt+1,diff+lower});
		if(nxt==0)
			break;
	}
	ll a[n],b[n];
	ll idx=0;
	for(int i=v.size()-1;i>=0;--i){
		int cnt=0;
		for(int j=v[i].F;j<=v[i].S;++j){
			a[idx]=v[i].F+cnt;
			b[idx]=v[i].S-cnt;
			idx++,cnt++;
		}
	}
	
	for(auto i:a)
		cout<<i<<" ";
	cout<<"\n";
	for(auto i:b)
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