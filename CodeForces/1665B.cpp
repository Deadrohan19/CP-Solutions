/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define mp make_pair
#define all(x) begin(x),end(x)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define INF LLONG_MAX
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//functions
int popcount(int x){return __builtin_popcount(x);}

void test_case(){
    ll n;cin>>n;
    map<ll, ll> m;
    
    for(int i=0;i<n;++i){
    	ll x;cin>>x;
    	m[x]++;
    }
    
    ll mx_freq=0;
    for(auto p: m)
    	mx_freq =max(p.S, mx_freq);
    
    ll left = n-mx_freq;
    ll cnt=0;
    if(mx_freq!=n)
    	cnt=1;
    ll sum = mx_freq;
    while(1){
    	if(sum>=left)
    		break;
    	cnt++;
    	mx_freq*=2;
    	sum += mx_freq;
    }
    cout<<left+cnt<<"\n";
}

int main(){
	deadman
    
    clock_t start = clock();
    int tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
