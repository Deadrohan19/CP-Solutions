//NOT DONE(TLE)
/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
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
//functions
int popcount(int x){return __builtin_popcount(x);}
#define N 100000

void test_case(){
    int n,m;cin>>n>>m;
    int arr[n][m];
    
    for(int i=0;i<n;++i)
    	for(int j=0;j<m;++j)
	    	cin>>arr[i][j];

    // vector<vector<pair<int, int>>> v(N+1);
    // vector<pair<int, int>> v[N+1];
    unordered_map<int,vector<pair<int, int>>> v;
    for(int i=0;i<n;++i)
    	for(int j=0;j<m;++j){
    		v[arr[i][j]].pb({i,j});
    	}
    	
    ll ans=0;
    for(auto i: v){
    	for(int j=0;j<i.S.size()-1;++j){
    		for(int k=j+1;k<i.S.size();++k)
    			ans += abs(i.S[j].F-i.S[k].F)+abs(i.S[j].S-i.S[k].S);
    	}
    }
    cout<<ans<<"\n";
}

int main(){
	deadman
    
    clock_t start = clock();
   	test_case();
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}