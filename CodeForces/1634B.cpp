#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n,x,y;cin>>n>>x>>y;
	for(ll i=0;i<n;++i){
		ll a;cin>>a;
		x+=a;
	}
	if((x+y)%2==0)
		cout<<"Alice";
	else
		cout<<"Bob";
	cout<<"\n";
}

int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}