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
	
	sort(arr ,arr+n);
	
	bool flag = true;
	
	for(int i=1;i<n-1;++i){
		if((3*arr[i]==(2*arr[i-1]+arr[i+1])) || 3*arr[i]==(2*arr[i+1]+arr[i-1]))
			continue;
		else{
			flag = false;
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
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}