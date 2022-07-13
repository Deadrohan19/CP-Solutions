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
	char board[8][8];
	
	for(int i=0;i<8;++i){
		for(int j=0;j<8;++j)
			cin>>board[i][j];
	}
	
	for(int i=1;i<7;++i)
		for(int j=1;j<7;++j){
			if(board[i][j]=='#'){
				if(board[i-1][j-1]=='#' && board[i+1][j-1]=='#' && board[i-1][j+1]=='#' && board[i+1][j+1]=='#'){
					cout<<i+1<<" "<<j+1<<"\n";
					return;
				}
			}
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