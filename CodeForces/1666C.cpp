//WA
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define F first
#define S second
#define pb push_back

ll mn = LLONG_MAX;
vector<ll> ans;

void join(pair<ll, ll> a, pair<ll, ll> b, vector<ll>& vec, ll &temp){
	vec.pb(a.F);
	vec.pb(a.S);
	
	if(a.F!=b.F && a.S!=b.S){
		vec.pb(a.F);
		vec.pb(b.S);
		
		temp+=abs(b.S-a.S);
		
		vec.pb(a.F);
		vec.pb(b.S);
	}
	
	vec.pb(b.F);
	vec.pb(b.S);
	
	if(a.F==b.F)
		temp+=abs(a.S - b.S);
	else
		temp+= abs(a.F - b.F);
}

void calc(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c){
	ll temp=0;
	vector<ll> vec;
	join(a,b,vec,temp);
	join(b,c,vec,temp);
	if(temp<mn){
		mn = temp;
		ans = vec;
	}
}

void solve(){
	pair<ll, ll> a,b,c;
	cin>>a.F>>a.S;
	cin>>b.F>>b.S;
	cin>>c.F>>c.S;
	
	calc(a,b,c);
	calc(a,c,b);
	calc(b,a,c);
	
	cout<<ans.size()/4;
	for(int i=0;i<ans.size();++i){
		if(i%4==0)
			cout<<"\n";
		cout<<ans[i]<<" ";
	}
}


int main(){
	ll t=1;
	while(t--){
		solve();
	}
}