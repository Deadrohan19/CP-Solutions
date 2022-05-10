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

const int mod = 998244353;

ll pow_mod(ll a, ll b) { 
    if(b==0) return 1;
    ll store = pow_mod(a, b/2);
    if(b&1) {return (a%mod* ((store%mod*store%mod) %mod)) %mod;} 
    else{ return (store%mod*store%mod) %mod;} 
}

void test_case(){
    int n;cin>>n;
    string s;cin>>s;	
    ll ans=0;
    ll x=0;
    for(int i=0;i<n;++i){
    	if(s[i]=='1')
    		x += (i+1)*(s[i]-48);
    	if(x&1)
    		ans = (ans%mod + pow_mod(2,n-1-i)%mod)%mod;
    }
    cout<<ans<<"\n";
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
