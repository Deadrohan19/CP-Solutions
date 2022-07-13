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
#define MOD 1000000007
#define dbg(x) cout << x << "\n";

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

void solve(){
	ll n;cin>>n;
	ll arr[n];
	for(auto &i: arr)
		cin>>i;
	ll output = 1e18;
	
	ll mx = *max_element(arr,arr+n);
	
	for(auto x : {mx, mx+1}){	
		ll sum =0,odd=0,even=0;
		
		for(auto i: arr){
			ll temp = x-i;
			if(temp==0)
				continue;
			else if(temp&1)
				odd++;
			else
				even++;
			
			sum+=temp;
		}
		
		ll ans = sum/3 * 2;
		
		if(sum%3==1)
			ans++;
		else if(sum%3==2)
			ans+=2;
		
		ans = max(ans, odd*2 -1);
		output = min(ans,output);
	}
	cout<<output<<"\n";
}


int main(){
	deadman
	cout << fixed << setprecision(15);
	
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}