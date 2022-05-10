#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define N 1e5
vector<ll> vec;

void preprocess(){
	for(ll i=0;i<N;++i)
		vec.pb((i*(i+1))/2);
	// cout<<"DONE";
}

int search(ll n){
	for(int i=0;i<N;++i){
		if(vec[i]==n)
			return i;
		if(vec[i]>n)
			return i-1;
	}
}

int main() {
	preprocess();
	ll t;cin>>t;
	while(t--){
	    ll n;cin>>n;
	    cout<<search(n)<<"\n";
	}
	return 0;
}
