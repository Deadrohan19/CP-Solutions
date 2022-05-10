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
	int one, zero;
	one=zero=-1;
	
	for(int i=0;i<s.size();++i){
		if(s[i]=='0'){
			zero=i;
			break;
		}
		else if(s[i]=='1')
			one = i;
	}
	
	if(one==-1 && zero==-1)
		cout<<s.size();
	else if(zero==-1)
		cout<<s.size()-one;
	else if(one==-1){
		cout<<zero+1;
	}
	else
		cout<<zero-one+1;
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