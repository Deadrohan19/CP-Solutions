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
	
	if(n==2){
		cout<<"0\n";
		return;
	}
	
	if(n==4){
		cout<<"2\n";
		return;
	}
	
	if(n&1){
		cout<<(n/2)*((n/2)+1)-1;
	}
	else{
		ll half = n/2;
		ll ans;
		if(half & 1)
			ans = (half-2)*(half+2)-1;
		else
			ans=(half-1)*(half+1)-1;
		
		cout<<ans;
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