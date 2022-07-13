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
		
	map<int,int> mp;
	for(auto i: v)
		mp[i%10]++;
	
	vector<int> v_new;
	for(auto p: mp){
		ll temp=p.S;
		if(p.S>=3){
			temp=3;
		}
		for(int i=0;i<temp;++i)
			v_new.pb(p.F);
	}
	
	for(int i=0;i<v_new.size()-2;++i){
		for(int j=i+1;j<v_new.size()-1;++j)
			for(int k=j+1;k<v_new.size();++k){
				ll temp = v_new[i]+ v_new[j] + v_new[k];
				if(temp%10==3){
					cout<<"YES\n";
					return;
				}
			}
	}
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