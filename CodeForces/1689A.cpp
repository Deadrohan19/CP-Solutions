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
	ll n,m,k;cin>>n>>m>>k;
	string a,b;cin>>a>>b;
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	int i=0,j=0;
	
	int cnt_a=0,cnt_b=0;
	
	while(i<n&&j<m){
		if(a[i]<b[j]){
			if(cnt_a<k){
				cout<<a[i++];
				cnt_a++;
				cnt_b=0;
			}
			else{
				cout<<b[j++];
				cnt_b++;
				cnt_a=0;
			}
			
		}
		else{
			if(cnt_b<k){
				cout<<b[j++];
				cnt_b++;
				cnt_a=0;
			}
			else{
				cout<<a[i++];
				cnt_a++;
				cnt_b=0;
			}
			
		}
	}
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