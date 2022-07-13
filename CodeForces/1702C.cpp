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

bool cmp(pair<ll,ll>& a, pair<ll,ll>& b){
	if(a.F==b.F)
		return a.S<b.S;
	return a.F<b.F;
}

ll firstOccurence(vector<pair<ll, ll>>& v, ll x){
	int low = 0, high = v.size()-1;
	
	while(low<=high){
		int mid = (low + high)/2;
		if(x<v[mid].F)
			high = mid-1;
		else if(x>v[mid].F)
			low = mid +1;
		else{
			if (mid==0 || v[mid-1].F!=x)
				return mid+1;
			else
				high = mid-1;
		}
	}
	return -1;
}

ll lastOccurence(vector<pair<ll, ll>>& v, ll x){
	int low = 0, high = v.size()-1;
	
	while(low<=high){
		int mid = (low + high)/2;
		if(x<v[mid].F)
			high = mid-1;
		else if(x>v[mid].F)
			low = mid +1;
		else{
			if (mid==v.size()-1 || v[mid+1].F!=x)
				return mid+1;
			else
				low = mid+1;
		}
	}
	return -1;
}

void solve(){
	ll n,k;cin>>n>>k;
	
	vector<pair<ll,ll>> v;
	
	for(int i=1;i<=n;++i){
		ll x;cin>>x;
		v.pb({x,i});
	}
	
	sort(v.begin(), v.end(), cmp);
	
	
	while(k--){
		ll x,y;cin>>x>>y;nbk
		
		ll first = firstOccurence(v,x);
		ll last = lastOccurence(v,y);
		
		
		if((min(first,last)==-1) || v[first-1].S>=v[last-1].S)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";
			
	}
	
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