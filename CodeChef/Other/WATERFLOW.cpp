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
	int w,x,y,z;cin>>w>>x>>y>>z;
	float to_be_filled = x-w;
	float hours_required_to_fill = to_be_filled/y;
	
	if(hours_required_to_fill == z)
		cout<<"filled";
	else if(hours_required_to_fill>z)
		cout<<"Unfilled";
	else
		cout<<"overFlow";
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