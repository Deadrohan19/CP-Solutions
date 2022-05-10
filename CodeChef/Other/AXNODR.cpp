#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

void solve(){
	ull n;cin>>n;
	
	int x = (n-2)%4;
	
	if(x<2)
		cout<<3;
	else if(x==2)
		cout<<n+3;
	else
		cout<<n;
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}