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
	
	vector<ll> ans;
	
	for(int i=0;i<n;++i){
		ll x;cin>>x;
		string s;cin>>s;
		
		ll U_cnt=0,D_cnt=0;
		
		for(auto c: s)
			if(c=='U')
				U_cnt++;
			else
				D_cnt++;
		
		ll diff = U_cnt - D_cnt;
		
		diff *=-1;
		
		v[i]+= diff;
		
		while(v[i]<0)
			v[i]+=10;
		
		ans.pb(v[i]%10);
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