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
	ll n;cin>>n;
	vector<ll> a(n);
	for(auto &i: a)
		cin>>i;
	vector<ll> b(n);
	for(auto &i: b)
		cin>>i;
	
	map<pair<ll,ll>,ll> freq;
	for(int i=0;i<n;++i){
		freq[{a[i],b[i]}]++;
	}
	
	vector<ll> a_sorted =a;
	vector<ll> b_sorted =b;
	sort(a_sorted.begin(), a_sorted.end());
	sort(b_sorted.begin(), b_sorted.end());
	
	for(int i=0;i<n;++i){
		if(freq[{a_sorted[i],b_sorted[i]}])
			freq[{a_sorted[i],b_sorted[i]}]--;
		else{
			cout<<"-1\n";
			return;
		}
	}
	
	vector<pair<ll, ll>> ans;
	
	for(int i=0;i<n;++i){
		if(a[i]==a_sorted[i] && b[i]==b_sorted[i])
			continue;
		else{
			for(int j=i+1;j<n;++j){
				if(a[j]==a_sorted[i] && b[j]==b_sorted[i]){
					ans.pb({i+1,j+1});
					swap(a[i],a[j]);
					swap(b[i],b[j]);
				}
			}
		}
	}
	
	if(ans.size()>10000){
		cout<<"-1\n";
		return;
	}
	cout<<ans.size()<<"\n";
	for(auto p: ans)
		cout<<p.F<<" "<<p.S<<"\n";
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