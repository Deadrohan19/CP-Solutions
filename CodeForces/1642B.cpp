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
#define forall(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define INF (int)1e9
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    int n;cin>>n;
    unordered_map<ll,ll> hash;
    for(int i=0;i<n;++i){
    	ll x;cin>>x;
    	hash[x]++;
    }
    ll x= hash.size();
    ll cnt =1;
    ll temp;
    map<ll,ll> m;
    for(auto i: hash){
    	m[i.S]++;
    }
    bool flag=false;
    for(auto i: m){
    	if(i.F==1){
    		for(int j=0;j<i.S;++j){
    			cout<<max(cnt,x)<<" ";
    			cnt++;
    		}
    		flag = true;
    	}
    	else{
    		for(int j=0;j<i.S;++j){
    			if(flag){
					x++;
					flag = false;
				}
    			for(int k=0;k<i.F;++k){
    				
    				cout<<max(cnt,x)<<" ";
    				cnt++;
    			}
    			x++;
    		}
    	}
    }
    // for(auto i: hash)
    // 	cout<<i.F<<" "<<i.S<<"\n";
    // cout<<"\n";
    // for(auto i: m)
    // 	cout<<i.F<<" "<<i.S<<"\n";
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
