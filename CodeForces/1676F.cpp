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
	ll n,k;cin>>n>>k;
	ll arr[n];
	for(auto &i: arr)
		cin>>i;
	
	// sort(arr, arr+n);
	
	map<int, int> m;
	for(auto i: arr)
		m[i]++;
	
	pair<ll, ll> ans={-1,-1};
	ll mx = 0;
	ll x=-1;
	int streak=0;
	ll f_num, s_num;
	
	for(auto p: m){
		if(x+1==p.F && p.S>=k){
			if(streak ==0)
				f_num = p.F;
			streak++;
			s_num=p.F;
		}
		else{
			if(streak>mx){
				mx = streak;
				ans ={f_num,s_num};
			}
			streak =0;
			if(p.S>=k){
				f_num = p.F;
				s_num = p.F;
				streak++;
			}
		}
		x = p.F;
	}
	if(streak>mx){
		mx = streak;
		ans ={f_num,s_num};
	}
	
	// for(auto p: m)
	// 	cout<<p.F<<" "<<p.S<<"\n";
	if(mx==0)
		cout<<-1;
	else
		cout<<ans.F<<" "<<ans.S;
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