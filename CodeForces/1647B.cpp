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
    if(n==1 || m==1){
    	cout<<"YES\n";
    	return;
    }
    char up,down;
    //upper row
    bool flag=true;
    for(int i=0;i<m;++i){
    	if(arr[0][i]=='1'){
    		if(flag){
    			down = arr[1][i];
    			flag = false;
    			continue;
    		}
    		if(arr[1][i]!=down){
    			cout<<"NO\n";
    			return;
    		}
    	}
    	else
    		flag = true;
    }
    //mid rows
    for(int i=1;i<n-1;++i){
    	flag = true;
    	for(int j=0;j<m;++j){
    		if(arr[i][j]=='1'){
	    		if(flag){
	    			up = arr[i-1][j];
	    			down = arr[i+1][j];
	    			flag = false;
	    			continue;
	    		}
	    		if(arr[i-1][j]!=up || arr[i+1][j]!=down){
	    			cout<<"NO\n";
	    			return;
	    		}
	    	}
	    	else
    			flag = true;
    	}
    }
    //last row
    flag = true;
    for(int i=0;i<m;++i){
    	if(arr[n-1][i]=='1'){
    		if(flag){
    			up = arr[n-2][i];
    			flag = false;
    			continue;
    		}
    		if(arr[n-2][i]!=up){
    			cout<<"NO\n";
    			return;
    		}
    	}
    	else
    		flag = true;
    }
    cout<<"YES\n";
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
