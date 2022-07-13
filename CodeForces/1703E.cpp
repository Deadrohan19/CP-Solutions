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
	vector<string> matrix(n);
	for(int i=0;i<n;++i){
		cin>>matrix[i];
	}
	
	ll ans =0;
	
	for(int i=0;i<n/2;++i){
		for(int j=i;j<n-i-1;++j){
			int cnt=0;
			int a=i,b=j;
			
			for(int k=0;k<4;++k){
				if(matrix[a][b]=='1')
					cnt++;
				swap(a,b);
				b = n-1-b;
			}
			ans += min(cnt, 4-cnt);
		}
	}
	
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