#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int n,x,y;cin>>n>>x>>y;
	if((n+1)*y>=x)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}