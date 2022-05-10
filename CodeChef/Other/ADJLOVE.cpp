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
    int n;cin>>n;
    vector<ll> odd,even;
    for(int i=0;i<n;++i){
    	ll x;cin>>x;
    	if(x&1)
    		odd.pb(x);
    	else
    		even.pb(x);
    }
    int n_odd=odd.size(), n_even = even.size();
    if(n_odd>1){
    	n_odd-=2;
    	if(n_even>=n_odd){
    		cout<<odd[0]<<" "<<odd[1]<<" ";
    		for(int i=0;i<n_even;++i){
    			cout<<even[i]<<" ";
    			if(i<n_odd)
    				cout<<odd[i+2]<<" ";
    		}
    	}
    	else{
    		if((n_odd-n_even)&1){
    			if(n_even>0){
	    			cout<<odd[0]<<" "<<odd[1]<<" ";
		    		for(int i=0;i<n_odd;++i){
		    			if(i<n_even-1)
			    			cout<<even[i]<<" ";
		    			cout<<odd[i+2]<<" ";
	    			}
	    			cout<<even[n_even-1];
    			}
    			else
    				cout<<-1;
    		}
    		else{
    			cout<<odd[0]<<" "<<odd[1]<<" ";
	    		for(int i=0;i<n_odd;++i){
	    			if(i<n_even)
		    			cout<<even[i]<<" ";
	    			cout<<odd[i+2]<<" ";
	    		}
    		}
    	}
    }
    else
    	cout<<-1;
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
