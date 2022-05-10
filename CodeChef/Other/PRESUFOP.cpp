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
#define mod 1e9+7
#define INF LLONG_MAX
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//functions
int popcount(int x){return __builtin_popcount(x);}

void test_case(){
    ll n;cin>>n;
    ll a[n],b[n],arr[n];
    for(int i=0;i<n;++i)
    	cin>>a[i];
    for(int i=0;i<n;++i)
    	cin>>b[i];
    for(int i=0;i<n;++i){
    	if(b[i]<a[i]){
    		cout<<-1<<"\n";
    		return;
    	}
    	arr[i]=b[i]-a[i];
    }
    
    ll ans = arr[0];
    ll mx =0,x=arr[0];
    for(int i=0;i<n;++i){
    	x = min(x,max(arr[i]-mx,0LL));
    	if(!x)
    		break;
    	arr[i]-=x;
    	mx = max(mx,arr[i]);
    }
    
    ans +=arr[n-1];
    mx=0,x=arr[n-1];
    for(int i=n-1;i>=0;--i){
    	x = min(x,max(arr[i]-mx,0LL));
    	if(!x)
    		break;
    	arr[i]-=x;
    	mx = max(mx,arr[i]);
    }
    
    for(int i=0;i<n;++i){
    	if(arr[i]!=0){
    		cout<<-1<<"\n";
    		return;
    	}
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
