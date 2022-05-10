#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	ll a,b;cin>>a>>b;
	if(a&1){
		if(a%3==0){
			if(a+3<=b)
				cout<<a<<" "<<a+3;
			else
				cout<<-1;
		}
		else{
			if(abs(a-b)<3)
				cout<<-1;
			else
				cout<<a+1<<" "<<a+3;
		}
	}
	else{
		if(abs(a-b)<2)
			cout<<-1;
		else 
			cout<<a<<" "<<a+2;
	}
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}