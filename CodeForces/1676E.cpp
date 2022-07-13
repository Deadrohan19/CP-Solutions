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
	ll n,q;cin>>n>>q;
	vector<ll> arr(n);
	for(auto &i: arr)
		cin>>i;
	
	sort(arr.begin(), arr.end());
	
	vector<ll> PS(n);
	PS[0]=arr[n-1];;
	for(int i=1,j=n-2;i<n;++i,j--)
		PS[i]=PS[i-1]+arr[j];
	
	for(int i=0;i<q;++i){
		ll x;cin>>x;
		auto lower = lower_bound(PS.begin(), PS.end(), x);
		
		if(lower == PS.end())
			cout<<-1;
		else
			cout<<lower-PS.begin()+1;
		cout<<"\n";
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