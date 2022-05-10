#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;


void solve(){
	ull a,b;cin>>a>>b;
	
	if(a==1 || b==1)
		cout<<-1;
	else if(__gcd(a,b)!=1)
		cout<<0;
	else
		cout<<1;
	
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}