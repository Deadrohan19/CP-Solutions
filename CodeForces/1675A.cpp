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
	ll a,b,c,x,y;cin>>a>>b>>c>>x>>y;
	x-=a;
	y-=b;
	
	if(x<0)
		x=0;
	if(y<0)
		y=0;
	
	if((x+y)<=c)
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