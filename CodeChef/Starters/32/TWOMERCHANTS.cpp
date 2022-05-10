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
#define mod 1000000007
#define INF LLONG_MAX
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//functions
int popcount(int x){return __builtin_popcount(x);}

//Binary Exponentiation(recursive)---divide & conquer-----> O(log b)
ll pow_mod(ll a, ll b) { 
    if(b==0) return 1;
    ll store = pow_mod(a, b/2);
    if(b&1) {return (a* ((store*store) %mod)) %mod;} 
    else{ return (store*store) %mod;} 
}

//Binary Exponentiation(iterative)---divide & conquer-----> O(log b)
    ll pow_(ll a, ll b){
    ll ans=1;
    while(b){
        if(b&1) { ans=(ans*a);}
        a=(a*a); b>>=1;
    } 
    return ans;
}

void test_case(){
    ll n,m,c;cin>>n>>m>>c;
    vector<ll> a(n),b(m);
    for(auto &i: a)
    	cin>>i;
    for(auto &i: b)
    	cin>>i;
    int x = upper_bound(a.begin(), a.end(), c) - a.begin();
    int y = upper_bound(b.begin(), b.end(), c) - b.begin();
    
    bool flag = false;
	if(-1*(c-a[n-1])<=y && (-1*(c-b[m-1])+max(0LL,(-1*(c-a[n-1])))<=n))
		flag = true;
	if(-1*(c-b[m-1])<=x && (-1*(c-a[n-1])+max(0LL,(-1*(c-b[m-1]))))<=m)
		flag = true;
	// cout<<x<<" "<<y<<"\n";
    if(flag)
    	cout<<"YES";
    else
    	cout<<"NO";
    cout<<"\n";
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
