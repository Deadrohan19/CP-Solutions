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

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

void solve(){
	ll a,b,m;cin>>a>>b>>m;
	// ll ans1,ans2;
	if(b<a)
		swap(b,a);
	
	// if(a<b){
	// 	ans1 = abs(b-a);
	// 	ans2 = m-b +a;
	// }
	// else{
	// 	ans
	// }
	
	
	ll ans1 = abs(b-a);
	ll ans2 = abs(m-b + a);
	// cout<<ans1<<" "<<ans2<<"\n";
	
	cout<<min(ans1, ans2)<<"\n";
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}