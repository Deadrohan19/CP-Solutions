#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int x,y,z;cin>>x>>y>>z;
	if((x+2*z)>=y)
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