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
	
	if(n==1){
		cout<<"-1\n";
		return;
	}
	
	vector<bool> vis(n+1,true);
	
	for(int i=0;i<n-2;++i){
		for(int k=1;k<=n;++k){
			if(k==v[i]) continue;
			if(vis[k]){
				cout<<k<<" ";
				vis[k]=false;
				break;
			}
		}
	}
	
	vector<int> arr(2);
	int cnt=0;
	for(int i=1;i<=n;++i)
		if(vis[i])
			arr[cnt++]=i;
		
	if(v[n-2]==arr[0]){
		cout<<arr[1]<<" "<<arr[0];
	}
	else if(v[n-2]==arr[1]){
		cout<<arr[0]<<" "<<arr[1];
	}
	else if(v[n-1]==arr[1]){
		cout<<arr[1]<<" "<<arr[0];
	}
	else if(v[n-1]==arr[0]){
		cout<<arr[0]<<" "<<arr[1];
	}
	else{
		cout<<min(arr[0],arr[1])<<" "<<max(arr[0],arr[1]);
	}
			
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