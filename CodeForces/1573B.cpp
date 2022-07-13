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

ll firstOccurrence(vector<ll> &arr,ll n, ll key){
	ll low = 0, high =n-1;
	
	while(low<=high){
		ll mid = (low + high)/2;
		
		if(arr[mid]==key){
			if(mid==0 || arr[mid-1]!=arr[mid])
				return mid;
			else
				high = mid -1;
		}
		else if(arr[mid]>key)
			high = mid -1;
		else
			low = mid +1;
	}
	return low;
}

void solve(){
	ll n;cin>>n;
	vector<ll> a(n);
	for(auto &i: a)
		cin>>i;
	vector<ll> b(n);
	for(auto &i: b)
		cin>>i;
	
	//prefix-max array
	ll mx = b[0];
	for(int i=0;i<n;++i){
		mx=max(mx,b[i]);
		b[i]=mx;
	}
	
	ll ans = INF;
	
	for(int i=0;i<n;++i){
		ans = min(ans,i+firstOccurrence(b,n,a[i]+1));
	}
	
	cout<<ans<<"\n";
	
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