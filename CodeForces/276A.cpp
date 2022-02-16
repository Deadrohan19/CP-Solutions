#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n,k;cin>>n>>k;
	ll mx = INT_MIN;
	for(int i=0;i<n;++i){
		ll f,t;cin>>f>>t;
		if(t>k)
			mx = max(mx,f-t+k);
		else
			mx = max(mx,f);
	}
	cout<<mx;
}