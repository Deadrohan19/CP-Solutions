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
    for(int i=0;i<n;++i)
    	cin>>arr[i];
    int ans=0;
    for(int i=1;i<n-1;++i){
    	if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
    		ans++;
    		if(i+2==n)
    			arr[i+1]=arr[i];
    		else
    			arr[i+1]= max(arr[i],arr[i+2]);
    	}
    }
    cout<<ans<<"\n";
    for(auto i: arr)
    	cout<<i<<" ";
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
