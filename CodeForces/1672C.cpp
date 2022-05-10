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
	ll n;cin>>n;
	ll arr[n];
	for(auto &i: arr)
		cin>>i;
	bool flag = true;
	ll x,y;
	for(int i=1;i<n;++i){
		if(arr[i]==arr[i-1]){
			flag=false;
			x = i;
			break;
		}
	}
	
	for(int i=n-2;i>=0;--i){
		if(arr[i]==arr[i+1]){
			flag = false;
			y=i;
			break;
		}
	}
	
	if(flag || (y-x)==-1)
		cout<<0;
	else if((y-x)==0)
		cout<<1;
	else
		cout<<y-x;
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