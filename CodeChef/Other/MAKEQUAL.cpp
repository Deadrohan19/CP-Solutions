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
#define MOD 10000000007
#define dbg(x) cout << x << "\n";

#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

ll lsb(ll x){return (x & -x);}

ll nCr(ll n, ll r){
	if(r>n)
		return -1;
	
	r = min(n-r, r);
	ll res =1;
	for(int i=0;i<r;++i){
		res *= (n-i);
		res /= (i+1);
	}
	return res;
}

ll power(ll a, ll b) {
	ll res = 1;
	a = a;
	while (b > 0) {
		if (b & 1) {res = (res * a); b--;}
		a = (a * a);
		b >>= 1;
	}
	return res;
}

void solve(){
	ll a,b,c;cin>>a>>b>>c;
	ll mask=1;
	
	while(mask<=power(2,31)){
		int x=0;
		if(mask&a){
			x++;
		}
		if(mask&b)
			x++;
		if(mask&c)
			x++;
		
		if(x==0 || x==3)
			break;
		else{
			if(x==1){
				if(mask&a)
					a+=mask;
				else if(mask&b)
					b+=mask;
				else
					c+=mask;
			}
			else{
				if(!(mask&a))
					a+=mask;
				else if(!(mask&b))
					b+=mask;
				else
					c+=mask;
			}
		}
		mask=(mask<<1);
	}
	// cout<<a<<" "<<b<<" "<<c<<"\n";
	if((a==b && b==c && c==a))
		cout<<"YES";
	else
		cout<<"NO";
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