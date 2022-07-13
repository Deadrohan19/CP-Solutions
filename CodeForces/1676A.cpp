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
	string s;cin>>s;
	int first = s[0]+s[1]+s[2];
	int last = s[3] + s[4] + s[5];
	
	if(first==last)
	    cout<<"YES";
	else
	    cout<<"NO";
	cout<<"\n";
	
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}