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
	
	int one_cnt=0;
	for(auto i: arr){
		if(i)
			one_cnt++;
	}
	
	if(one_cnt<(n-one_cnt))
		cout<<"0";
	else
		cout<<"1";
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