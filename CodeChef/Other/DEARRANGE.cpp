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
	ll n;cin>>n;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	bool flag = true;
	ll cnt=0;
	for(int i=0;i<n;++i){
		if(i==v[i]-1){
			flag = false;
			cnt++;
		}
	}
	if(cnt==n){
		cout<<"0\n";
		return;
	}
	else if(flag){
		cout<<"1\n";
	}
	else{
		cout<<"2\n";
		vector<bool> vis(n+1,true);
		
		vector<ll> ans;
		
		for(int i=0;i<n;++i){
			for(int j=n;j>=1;--j){
				if(vis[j] && v[i]!=j && j!=i+1){
					ans.pb(j);
					vis[j]=false;
					break;
				}
			}
		}
		
		cout<<"1 "<<n<<"\n";
		for(auto i: ans)
			cout<<i<<" ";
		cout<<"\n";
	}
	cout<<"1 "<<n<<"\n";
	rep(i,1,n+1)
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