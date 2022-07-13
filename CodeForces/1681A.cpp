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
	int n;cin>>n;
	ll a[n];
	for(auto &i: a)
		cin>>i;
	
	int m;cin>>m;
	ll b[m];
	for(auto &i: b)
		cin>>i;
	
	sort(a,a+n);
	sort(b,b+m);
	
	if(a[n-1]==b[m-1]){
		cout<<"Alice\nBob";
	}
	else if(a[n-1]>b[m-1]){
		cout<<"Alice\nAlice";
	}
	else
		cout<<"Bob\nBob";
	cout<<"\n";
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