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
	ll n,k;cin>>n>>k;
	string s;cin>>s;
	
	if(k>25){
		for(int i=0;i<s.size();++i)
			cout<<'a';
		cout<<"\n";
		return;
	}
	int x = s[0]-97;
	
	if(x>=k){
		for(int i=0;i<s.size();++i){
			int temp = s[i]-97;
			if(temp>(x-k) && temp<=x)
				cout<<(char)(97+x-k);
			else
				cout<<s[i];
		}
		cout<<"\n";
		return;
	}
	else{
		int mx = x;
		int idx = -1;
		for(int i=0;i<s.size();++i){
			int temp = s[i]-97;
			if(temp<=k)
				cout<<'a';
			else{
				idx = i;
				break;
			}
			mx = max(temp, mx);
		}
		
		if(idx!=-1){
			k-=mx;
			for(int i=idx;i<s.size();++i){
				int temp = s[i]-97;
				if(temp<=mx)
					cout<<'a';
				else if(temp>(s[idx]-97-k) && temp<=(s[idx]-97))
					cout<<(char)(s[idx]-k);
				else
					cout<<s[i];
			}
		}
		cout<<"\n";
		return;
	}
	
}


int main(){
	deadman
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	