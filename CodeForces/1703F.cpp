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

int upper_bound(vector<pair<ll, ll>>& arr, ll X)
{
	int N = arr.size();
	int mid;

	int low = 0;
	int high = N;

	while (low < high) {
		mid = low + (high - low) / 2;

		if (X >= arr[mid].F) {
			low = mid + 1;
		}

		else {
			high = mid;
		}
	}

	if(low < N && arr[low].F <= X) {
	low++;
	}

	return low;
}

void solve(){
	ll n;cin>>n;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	
	vector<pair<ll, ll>> idx_sorted,ele_sorted;
	
	for(int i=0;i<n;++i){
		if((i+1)>v[i])
			idx_sorted.pb({v[i],i+1});
	}
	
	ele_sorted = idx_sorted;
	sort(ele_sorted.begin(), ele_sorted.end());
	
	ll ans=0;	

	for(int i=0;i<idx_sorted.size();++i){
		ll idx = upper_bound(ele_sorted,idx_sorted[i].S);
		if(idx!=ele_sorted.size())
			ans += ele_sorted.size()-idx;
		else
			break;
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