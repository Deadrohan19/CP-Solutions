//Not Correct
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
    ll arr[n];
    cin>>arr[0];
    for(int i=1;i<n;++i){
    	cin>>arr[i];
    	arr[i]+=arr[i-1];
    }
    ll x = arr[n-1];
    for(int i=0;i<n;++i){
    	if(x%arr[i]==0){
    		ll temp =1;
    		int j;
    		for(j=i;j<n;++j){
    			if(arr[j]%arr[i]==0){
    				if(arr[j]/arr[i]==temp)
    					temp++;
    				else
    					break;
    			}
    		}
    		if(j==n){
    			cout<<n-temp+1<<"\n";
    			return;
    		}
    			
    	}
    }
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
