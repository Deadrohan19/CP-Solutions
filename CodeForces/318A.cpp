#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n,k;cin>>n>>k;
	ll even=n/2;
	ll odd = n%2 + even;
	
	if(k>odd){
		k-=odd;
		cout<<k*2;
	}
	else
		cout<<k*2 -1;
	cout<<"\n";
}