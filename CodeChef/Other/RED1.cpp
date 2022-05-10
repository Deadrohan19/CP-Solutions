#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define F first
#define S second
#define pb push_back
#define INF LLONG_MAX

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void solve(){
	ull n;cin>>n;
	
	if(n==1){
		cout<<0<<"\n";
		return;
	}
	
	if(n&1){
		cout<<"1\n";
		return;
	}
	
	ll cnt=0;
	ll temp = n;
	while(temp%2==0){
		cnt++;
		temp/=2;
	}
	
	if(cnt&1)
		cout<<-1;
	else if((n&(n-1))==0)
		cout<<1;
	else if(n==sqrt(n)*sqrt(n))
		cout<<1;
	else
		cout<<2;
	cout<<"\n";
	
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}