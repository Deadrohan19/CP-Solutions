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

ll diff(pair<int,int> st,pair<int,int> end){
	if(st.F>end.F || (st.F==end.F && st.S>end.S)){
		return diff(st,{23,59}) + diff({00,00},end) + 1;
	}
	if(st.F==end.F){
		return end.S-st.S;
	}
	return (end.F-1-st.F)*60 + (60-st.S)+end.S;
}

void solve(){
	pair<int,int> st;
	string s;cin>>s;
	int x;cin>>x;
	st = {(s[0]-'0')*10 + (s[1]-'0'), (s[3]-'0')*10 + (s[4]-'0')};
	vector<pair<int,int>> arr = {{0,0},{1,10},{2,20},{3,30},{4,40},{5,50},{10,01},{11,11},{12,21},{13,31},{14,41},{15,51},{20,02},{21,12},{22,22},{23,32}};
	// cout<<st.F<<" "<<st.S<<"\n";
	
	// for(auto p: arr)
	// 	cout<<p.F<<" "<<p.S<<"\n";
	ll ans=0;
	for(auto p: arr){
		int temp =diff(st,p);
		if(temp%x==0){
			ans++;
			// cout<<p.F<<":"<<p.S<<"\n";
		}
		else{
			for(int i=0;i<10000;++i){
				temp+=1440;
				if(temp%x==0){
					ans++;
					break;
				}
			}
		}
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