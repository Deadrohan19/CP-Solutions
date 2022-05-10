#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	sort(arr,arr+n);
	
	ll PS[n],SS[n];
	PS[0]=arr[0];SS[n-1]=arr[n-1];
	for(int i=1;i<n;++i)
		PS[i]=PS[i-1]+arr[i];
	for(int i=n-2;i>=0;--i)
		SS[i]=SS[i+1]+arr[i];
	
	bool flag =false;
	
	if(n&1){
		for(int i=1;i<=n/2;++i)
			if(PS[i]<SS[n-i]){
				flag=true;
				break;
			}
	}
	else{
		for(int i=1;i<n/2;++i)
			if(PS[i]<SS[n-i]){
				flag=true;
				break;
			}
	}
	
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<"\n";
}


int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}