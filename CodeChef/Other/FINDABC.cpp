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
	vector<ll> v(n+1);
	for(auto &i: v)
		cin>>i;
	
	vector<ll> ans(3,0);
	
	for(ll i=(1<<(ll)log2(n));i>0;i/=2){
		ll temp = v[i] - v[0];
		
		// +3 --> three 0
		// +1 --> two 0, one 1
		// -1 --> one 0, two 1
		// -3 --> three 1
		
		temp/=i;
		
		if(temp==1){
			ans[0]+=i;
		}
		else if(temp==-1){
			ans[0]+=i;
			ans[1]+=i;
		}
		else if(temp==-3){
			ans[0]+=i;
			ans[1]+=i;
			ans[2]+=i;
		}
		
		sort(ans.begin(), ans.end());
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