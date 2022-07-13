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
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	
	ll PS[n],SS[n];
	PS[0]=v[0];SS[n-1]=v[n-1];
	
	for(int i=1;i<n;++i)
		PS[i]=__gcd(PS[i-1],v[i]);
	for(int i=n-2;i>=0;--i)
		SS[i]=__gcd(SS[i+1],v[i]);
	
	ll ans=0;
	
	for(int i=1;i<n-1;++i)
		if(__gcd(PS[i-1],SS[i+1])!=1)
			ans++;
	
	if(PS[n-2]!=1)
		ans++;
	if(SS[1]!=1)
		ans++;
	
	cout<<ans<<"\n";
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