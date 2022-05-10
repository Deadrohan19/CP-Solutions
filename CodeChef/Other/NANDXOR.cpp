/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include<bit>
using namespace std;
using ll = long long;
using ld = long double;
#define mp make_pair
#define all(x) begin(x),end(x)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define INF LLONG_MAX
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int popcount(int x){return __builtin_popcount(x);}

void doBrute(ll arr[], ll n){
	rep(i,0,n){
		rep(j,i+1,n){
			rep(k,i+1,n){
				if(j==k) continue;
				rep(l,k+1,n){
					if(l==j) continue;
					if(__builtin_popcountll(arr[i]^arr[j]) == __builtin_popcountll(arr[k]^arr[l])){
						cout<<i+1<<" "<<j+1<<" "<<k+1<<" "<<l+1<<"\n";
						return;
					}
				}
			}
		}
	}
	cout<<"-1\n";
}

void solve(ll arr[], ll n){
	vector<int> pc(31,-1);
	
	for(int i=0;i<n;i+=2){
		int x = __builtin_popcountll(arr[i]^arr[i+1]);
		if(pc[x]!=-1){
			cout<<pc[x]+1<<" "<<pc[x]+2<<" "<<i+1<<" "<<i+2<<"\n";
			return;
		}else pc[x]=i;
	}
}

void test_case(){
    ll n;cin>>n;
    ll arr[n];
    for(auto &i:arr) cin>>i;
    if(n>=64){
    	solve(arr,n);
    }
    else
    	doBrute(arr,n);
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
