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
	ll n,s;cin>>n>>s;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	
	ll total =0;
	for(auto i: v)
		total += i;
	if(total<s){
		cout<<"-1\n";
		return;
	}
	if(total==s){
		cout<<"0\n";
		return;
	}
	
	ll diff = total-s;
	
	ll cnt =0;
	ll i=0,j=n-1;
	
	for(;i<n;++i){
		if(cnt==diff)
			break;
		cnt += v[i];
	}
	ll ans = i+(n-1-j);
	
	while(i>=0){
		i--;
		while(i>0 && v[i-1]!=1)
			i--;
		
		while(v[j]!=1)
			j--;
		
		j--;
		ans = min(i+n-1-j,ans);
	}
	
	for(j=n-1,cnt=0;j>=0;--j){
		if(cnt==diff)
			break;
		cnt+=v[i];
	}
	ans = min(ans, n-1-j);
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