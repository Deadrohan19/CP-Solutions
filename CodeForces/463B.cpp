#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;

int main(){
	ll n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	ll x = -arr[0];
	ll ans =x;
	for(int i=0;i<n-1;++i){
		x += arr[i]-arr[i+1];
		ans = min(x,ans);
	}
	cout<<-ans;
}