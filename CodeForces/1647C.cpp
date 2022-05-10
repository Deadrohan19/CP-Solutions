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

void test_case(){
    int n,m;cin>>n>>m;
    string arr[n];
    for(int i=0;i<n;++i)
    	cin>>arr[i];
    if(arr[0][0]=='1'){
    	cout<<-1<<"\n";
    	return;
    }
    vector<int> vec;
    for(int i=0;i<n;++i){
    	for(int j=m-1;j>=1;--j){
    		if(arr[i][j]=='1'){
    			vec.pb(i);
    			vec.pb(j-1);
    			vec.pb(i);
    			vec.pb(j);
    		}
    	}
    }
    for(int i=n-1,j=0;i>=0;--i){
    	if(arr[i][j]=='1'){
			vec.pb(i-1);
			vec.pb(j);
			vec.pb(i);
			vec.pb(j);
		}
    }
    cout<<vec.size()/4;
    if(vec.size()!=0){
    	for(int i=0;i<vec.size();++i){
    		if(i%4==0)
    			cout<<"\n";
    		cout<<vec[i]+1<<" ";
    	}
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
