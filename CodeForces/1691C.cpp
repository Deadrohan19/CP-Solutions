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

void solve(){
	ll n,k;cin>>n>>k;
	string s;cin>>s;
	
	ll one_cnt=0;
	for(auto c: s)
		if(c=='1')
			++one_cnt;
	
	ll ans = one_cnt*11;
	ll left,right;
	
	for(int i=0;i<n;++i){
		if(s[i]=='1'){
			left = i;
			break;
		}
	}
	for(int i=n-1;i>=0;--i){
		if(s[i]=='1'){
			right = n-1-i;
			break;
		}
	}
	
	if(one_cnt!=1 && (left+right)<=k){
		ans -=11;
	}
	else if(right<=k){
		ans-=10;
	}
	else if(left<=k)
		--ans;
	
	cout<<max(0LL,ans)<<"\n";
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