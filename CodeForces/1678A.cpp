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
	int n;cin>>n;
	ll arr[n];
	for(auto &i: arr)
		cin>>i;
	
	sort(arr, arr+n);
	
	if(arr[0]==0){
		int cnt=0;
		for(auto i: arr){
			if(i==0)
				cnt++;
		}
		cout<<n-cnt;
	}
	else{
		bool flag =false;
		for(int i=0;i<n-1;++i){
			if(arr[i]==arr[i+1]){
				flag = true;
				break;
			}
		}
		if(flag){
			cout<<n;
		}
		else
			cout<<n+1;
	}
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