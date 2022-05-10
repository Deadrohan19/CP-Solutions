#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	ll n;cin>>n;
	bool flag=true;
	int a,b;cin>>a>>b;
	a &= 1;
	b &= 1;
	for(int i=2;i<n;++i){
		ll x;cin>>x;
		if(i&1){
			if((x&1)!=b){
				flag = false;
			}
		}
		else{
			if((x&1)!=a)
				flag = false;
		}
	}
	
	if(flag)
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