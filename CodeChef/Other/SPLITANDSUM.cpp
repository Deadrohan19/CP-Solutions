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

void solve(){
	ll n;cin>>n;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	
	vector<ll> bits(31,0);
	
	vector<pair<ll, ll>> ans;
	ll last=0;
	ll bit;
	bool flag = false;
	
	for(int i=0;i<n;++i){
		if(v[i]==0)
			continue;
		
		ll temp = v[i];
		for(int i=0;i<31;++i){
			if(temp%2)
				bits[i]++;
			temp>>=1;
		}
	}
	
	for(int i=0;i<31;++i){
		if(bits[i]>=2){
			bit = i;
			flag = true;
			break;
		}
	}
	
	ll mask = (1<<bit);
	
	if(flag){
		for(int i=0;i<n;++i){
			if(v[i]==0)
				continue;
			
			if(v[i]&mask){
				if(last==0){
					last =-1;
					continue;
				}
				if(last==-1){
					last = 1;
				}
				ans.pb({last,i});
				last =i+1;
			}
		}
		
		ans.pb({last,n});
	}
	
	if(ans.size()!=0){
	    cout<<"YES\n";
	    cout<<ans.size()<<"\n";
	    for(auto p: ans){
	    	cout<<p.F<<" "<<p.S<<"\n"; 
	    }
	}
	else
	    cout<<"NO\n";
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