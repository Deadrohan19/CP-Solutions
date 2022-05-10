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
	ll n,m,x;cin>>n>>m>>x;
	ll avg = n*x;
	if(m==x){
		cout<<"0\n";
		return;
	}
	
	cout<<fixed<<setprecision(0);
	cout<<avg/(x+1)<<"\n";
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}