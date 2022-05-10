#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int m,n,k;cin>>m>>n>>k;
	int time = n*k;
	if(time<m)
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