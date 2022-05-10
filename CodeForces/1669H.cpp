#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//Binary Exponentiation(iterative)---divide & conquer-----> O(log b)
    ll pow_(ll a, ll b){
    ll ans=1;
    while(b){
        if(b&1) { ans=(ans*a);}
        a=(a*a); b>>=1;
    } 
    return ans;
}

void solve(){
	ll n,k;cin>>n>>k;
	
	ll bits[31]={0};
	
	
	for(int i=0;i<n;++i){
		ll x;cin>>x;
		
		while(x & (-x)){
			ll temp = x&(-x);
			x-=temp;
			bits[(ll)log2(temp)]++;
		}
	}
	ll ans = 0;
	
	for(int i=30;i>=0;--i){
		if((n-bits[i])<=k){
			ans += pow_(2,i);
			k-=(n-bits[i]);
		}
	}
	cout<<ans<<"\n";
}


int main(){
	ll t;cin>>t;
	while(t--){
		solve();
	}
}