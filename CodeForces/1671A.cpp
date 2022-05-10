#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	string s;cin>>s;
	for(int i=1;i<s.size()-1;++i){
		if(s[i]!=s[i-1] && s[i]!=s[i+1]){
			cout<<"NO\n";
			return;
		}
	}
	bool flag = true;
	if(s.size()==1)
		flag = false;
	else{
		if(s[0]!=s[1])
			flag = false;
		else if(s[s.size()-1]!=s[s.size()-2])
			flag = false;
	}
	
	if(flag)
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