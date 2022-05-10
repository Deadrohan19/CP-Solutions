#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
	int n,m;cin>>n>>m;
	char in[n][m], out[n][m];
	
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			cin>>in[i][j];
	
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j){
			if(in[i][j]=='*')
				out[i][j]='.';
			else
				out[i][j]=in[i][j];
		}
	
	for(int j=0;j<m;++j){
		int cnt =0;
		for(int i=0;i<n;++i){
			if(in[i][j]=='o'){
				while(cnt){
					out[i-cnt][j]='*';
					cnt--;
				}
			}
			else if(in[i][j]=='*')
				cnt++;
		}
		while(cnt){
			out[n-cnt][j]='*';
			cnt--;
		}
	}
	
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j)
			cout<<out[i][j];
		cout<<"\n";
	}
	cout<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}