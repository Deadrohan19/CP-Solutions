#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	ll n;cin>>n;
	ll arr[n];
	
	for(auto &i: arr)
		cin>>i;
	
	ll PS[n],SS[n];
	PS[0]=arr[0];SS[n-1]=arr[n-1];
	for(int i=1;i<n;++i)
		PS[i]=PS[i-1]+arr[i];
	for(int i=n-2;i>=0;--i)
		SS[i]=SS[i+1]+arr[i];
	
	int i=0,j=n-1;
	
	ll ans =0;
	
	while(i<j){
		if(PS[i]==SS[j]){
			ans = max(ans, (i+1)+ (n-j));
			i++;
			j--;
		}
		else if(PS[i]>SS[j]){
			j--;
		}
		else
			i++;
	}
	
	cout<<ans<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}