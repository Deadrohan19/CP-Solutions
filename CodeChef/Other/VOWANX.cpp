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

void solve(){
	ll n;cin>>n;
	string s;cin>>s;
	
	string front, back;
	
	ll v_cnt=0;
	
	// for(auto c: s)
	// 	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	// 		v_cnt++;
	
	ll left=n-1,right=n-1;
	
	for(int i=n-1;i>=0;--i){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			left = i;
			if(v_cnt&1){
				for(int j=right;j>=left;--j)
					front+=s[j];
			}
			else{
				for(int j=right;j>=left;--j)
					back+=s[j];
			}
			right = i-1;
			v_cnt++;
		}
	}
	left = 0;
	if(v_cnt&1){
		for(int j=right;j>=left;--j)
			front+=s[j];
	}
	else{
		for(int j=right;j>=left;--j)
			back+=s[j];
	}	

	cout<<front;
	for(int i=back.size()-1;i>=0;--i)
		cout<<back[i];
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