#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int sunny=0;
	for(int i=0;i<7;++i){
		int x;cin>>x;
		if(x)
			sunny++;
	}
	
	if(sunny>3)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}