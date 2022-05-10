#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	ll n;cin>>n;
	ll y = n/2;
	ll x = y & (y-1);
	
	if(x==0 || n&1)
		cout<<-1;
	else
		cout<<"0 "<<x<<" "<<y-x;
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}