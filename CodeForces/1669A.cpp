#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int n;cin>>n;
	cout<<"Division ";
	if(n<=1399)
		cout<<"4";
	else if(n<=1599)
		cout<<"3";
	else if(n<=1899)
		cout<<"2";
	else
		cout<<"1";
	cout<<"\n";
	
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}