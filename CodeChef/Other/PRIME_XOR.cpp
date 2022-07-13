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
	ll x,y,z;cin>>x>>y;
	
	z = (x^y);
	
	vector<ll> ans;
	ll temp,temp1;
	
	if(x&1){
		ans.pb(x^2);
		ans.pb(2);
		temp = y^2, temp1 = z^2;
		
	}
	else if(y&1){
		ans.pb(y^2);
		ans.pb(2);
		temp = x^2, temp1=z^2;
	}
	else{
		ans.pb(z^2);
		ans.pb(2);
		temp = x^2, temp1=y^2;
	}
	
	if(temp&1)
		ans.pb(temp);
	else
		ans.pb(temp1);
	
	sort(ans.begin(), ans.end());
	
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