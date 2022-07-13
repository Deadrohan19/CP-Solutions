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
	ull x,y,z;cin>>x>>y>>z;
	
	if(y%z==0)
		cout<<-1;
	else{
		ull remainder = (y-(x+1)%y);
		ull num = x+1;
		
		if(remainder!=y)
			num += remainder;
		
		while(num%z==0)
			num+=y;
		cout<<num;
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