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
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

void solve(){
	ll n,m;cin>>n>>m;
	
	vector<string> arr(n);
	
	for(int i=0;i<n;++i)
		cin>>arr[i];
	
	int x;
	bool flag1 = true;
	for(int i=0;i<n && flag1;++i){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='R'){
				x = j;
				flag1 = false;
				break;
			}
			// cout<<arr[i][j]<<"("<<i<<","<<j<<")";
		}
		// cout<<"\n";
	}
		
	bool flag = true;
	for(int i=0;i<n;++i)
		for(int j=0;j<x;j++){
			if(arr[i][j]=='R'){
				flag=false;
				break;
			}
		}
		
	// cout<<x<<"\n";
	// for(int i=0;i<n;++i){
	// 	for(int j=0;j<x;j++)
	// 		cout<<arr[i][j];
	// 	cout<<"\n";
	// }
	
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