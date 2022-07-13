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
	a = a;
	while (b > 0) {
		if (b & 1) {res = (res * a); b--;}
		a = (a * a);
		b >>= 1;
	}
	return res;
}

void solve(){
	ll n,m;cin>>n>>m;
	vector<ll> a(n);
	for(auto &i: a)
		cin>>i;
	
	ll k;cin>>k;
	vector<ll> b(k);
	for(auto &i: b)
		cin>>i;
	
	vector<pair<ll, ll>> vec_1,vec_2;
	
	ll x = a[0],cnt=0;
	
	while(x/m){
		if(x%m)
			break;
		else{
			cnt++;
			x/=m;
		}
	}
	vec_1.pb({x,power(m,cnt)});
	
	for(int i=1;i<n;++i){
		x = a[i],cnt=0;
		while(x/m){
			if(x%m)
				break;
			else{
				cnt++;
				x/=m;
			}
		}
		if(vec_1.back().F==x)
			vec_1.back().S += power(m,cnt);
		else
			vec_1.pb({x,power(m,cnt)});
	}
	
	x = b[0],cnt=0;
	
	while(x/m){
		if(x%m)
			break;
		else{
			cnt++;
			x/=m;
		}
	}
	vec_2.pb({x,power(m,cnt)});
	
	for(int i=1;i<k;++i){
		x = b[i],cnt=0;
		while(x/m){
			if(x%m)
				break;
			else{
				cnt++;
				x/=m;
			}
		}
		if(vec_2.back().F==x)
			vec_2.back().S += power(m,cnt);
		else
			vec_2.pb({x,power(m,cnt)});
	}
	
	// for(auto p: vec_1)
	// 	cout<<p.F<<" "<<p.S<<" , ";
	// cout<<"\n";
	
	// for(auto p: vec_2)
	// 	cout<<p.F<<" "<<p.S<<" , ";
	// cout<<"\n";
	
	if(vec_1 == vec_2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
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