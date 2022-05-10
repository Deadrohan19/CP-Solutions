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
    bool flag =true;
    for(int i=1;i<n;++i){
    	cin>>arr[i];
    	if(arr[i-1]>arr[i])
    		flag = false;
    }
    if(flag)
    	cout<<"0\n";
    else if(arr[n-2]>arr[n-1])
    	cout<<"-1\n";
    else{
    	if((arr[n-2]-arr[n-1])>arr[n-2])
    		cout<<"-1\n";
    	else{
    		cout<<n-2<<"\n";
    		for(int i=1;i<n-1;++i)
    			cout<<i<<" "<<n-1<<" "<<n<<"\n";
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
