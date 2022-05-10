#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int n,a,b;cin>>n>>a>>b;
	if(abs(a-b)==1){
		if(max(a,b)==n || min(a,b)==1)
			cout<<1;
		else
			cout<<2;
		
	}
	else if(abs(a-b)==2){
		cout<<1;
	}
	else
		cout<<0;
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}