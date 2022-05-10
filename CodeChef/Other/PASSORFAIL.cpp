#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int n,x,p;cin>>n>>x>>p;
	int marks=3*x;
	marks-=(n-x);
	if(marks>=p)
		cout<<"PASS";
	else
		cout<<"FAIL";
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}