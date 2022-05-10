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


void solve(){
	string s;cin>>s;
	int ans =0;
	ans += (s[0]-97)*25;
	if(s[0]>s[1])
		ans+=s[1]-96;
	else
		ans+=s[1]-97;
	cout<<ans<<"\n";
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}