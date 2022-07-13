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

bool chk_a(string &A, string &B,ll i, ll j){
	vector<ll> b_A,b_B;
	ll cnt1=0,cnt2=0;
	
	for(;i<=j;++i){
		if(A[i]=='b')
			b_A.pb(i);
		else if(A[i]=='a')
			cnt1++;
		
		if(B[i]=='b')
			b_B.pb(i);
		else if(B[i]=='a')
			cnt2++;
	}
	
	if(b_A.size()!=b_B.size() || cnt1!=cnt2)
		return false;
	
	for(int k=0;k<b_B.size();++k){
		if(b_B[k]>b_A[k])
			return false;
	}
	return true;
}

bool chk_c(string &A, string &B,ll i, ll j){
	vector<ll> c_A,c_B;
	ll cnt1=0,cnt2=0;
	
	for(;i<=j;++i){
		if(A[i]=='c')
			c_A.pb(i);
		else if(A[i]=='b')
			cnt1++;
		
		if(B[i]=='c')
			c_B.pb(i);
		else if(B[i]=='b')
			cnt2++;
	}
	
	if(c_A.size()!=c_B.size() || cnt1!=cnt2)
		return false;
	
	for(int k=0;k<c_B.size();++k){
		if(c_B[k]>c_A[k])
			return false;
	}
	return true;
}

void solve(){
	ll n;cin>>n;
	string a,b;cin>>a>>b;
	ll i=0,j=0;
	
	bool ab = true;
	
	for(int k=0;k<n;++k){
		if(a[k]=='b')
			continue;
		if(a[k]=='c'){
			ab = false;
			break;
		}
		else
			break;
	}
	
	vector<pair<ll, ll>> a_arr, c_arr;
	
	while(j<n){
		if(a[j]=='b'){
			if(b[j]=='a'){
				if(ab)
					j++;
				else{
					c_arr.pb({i,j-1});
					i=j;
					j++;
					ab = true;
				}
			}
			else if(b[j]=='c'){
				if(ab){
					a_arr.pb({i,j-1});
					i=j;
					j++;
					ab = false;
				}
				else
					j++;
			}
			else
				j++;
		}
		else if(a[j]=='a'){
			if(ab){
				j++;
			}
			else{
				c_arr.pb({i,j-1});
				i=j;
				j++;
				ab = true;
			}
		}
		else{
			if(ab){
				a_arr.pb({i,j-1});
				i=j;
				j++;
				ab=false;
			}
			else
				j++;
		}
	}
	if(ab){
		a_arr.pb({i,j-1});
	}
	else
		c_arr.pb({i,j-1});
	
	for(auto p: a_arr){
		if(!(chk_a(a,b,p.F,p.S))){
			cout<<"NO\n";
			return;
		}
	}
	
	for(auto p: c_arr){
		if(!(chk_c(a,b,p.F,p.S))){
			cout<<"NO\n";
			return;
		}
	}
	
	cout<<"YES\n";
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