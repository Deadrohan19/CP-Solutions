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
	ll temp = arr[0];
	
	for(int i=1;i<n;++i){
		if(temp>arr[i]){
			if(flag){
				flag = false;
				swap(arr[i],arr[i-1]);
			}
			else{
				break;
			}
		}
		else
			temp = arr[i];
	}
	temp = arr[0];
	for(int i=1;i<n;++i){
		if(temp>arr[i]){
			cout<<"NO\n";
			return;
		}
		temp = arr[i];
	}
	cout<<"YES\n";
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}