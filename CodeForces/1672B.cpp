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
	string s;cin>>s;
	
	ll a, b;
	a=b=0;
	
	for(auto c: s){
		if(c=='A')
			a++;
		else{
			b++;
			if(a<b){
				cout<<"NO\n";
				return;
			}
			a-=b;
			b=0;
		}
		
	}
	
	if(a<b || s[s.size()-1]!='B'){
		cout<<"NO\n";
		return;
	}
	// cout<<a<<" "<<b<<"\n";
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