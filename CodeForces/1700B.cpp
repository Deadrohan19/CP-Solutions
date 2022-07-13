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
	
	int ans[n]={0};
	
	if(s[0]=='9'){
		
		bool flag = false;
		int carry =0;
		
		for(int i=n-1;i>=0;--i){
			int temp = 10-(s[i]-'0');
			
			if(flag){
				temp--;
			}
			if(temp>0)
				flag = true;
			temp+=carry + 1;
			
			carry = temp/10;
			
			ans[i]= temp%10;
		}
	}
	else{
		for(int i=0;i<n/2;++i){
			ans[i]= 9-(s[i]-48);
			ans[n-i-1]= 9-(s[n-i-1]-'0');
		}
	}
	
	for(auto i: ans)
		cout<<i;
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