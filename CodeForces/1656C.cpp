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
    ll n;cin>>n;
    ll arr[n];
    bool one,zero;
    one = zero = false;
    
    for(auto &i:arr){
    	cin>>i;
    }
    sort(arr, arr+n);
    for(auto i: arr){
    	if(i==0)
    		zero= true;
    	else if(i==1)
    		one = true;
    	else
    		break;
    }
    if(zero && one)
    	cout<<"NO";
    else if(!one)
    	cout<<"YES";
    else{
    	bool flag = true;
    	for(int i=0;i<n-1&& flag;++i){
    		if(arr[i]+1==arr[i+1])
    			flag = false;
    	}
    	if(flag)
	    	cout<<"YES";
	    else
	    	cout<<"NO";
    }
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
