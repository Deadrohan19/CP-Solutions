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
    ll n,m;cin>>n>>m;
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    int a=0,b=0;
    
    if(x1%2==y1%2){
    	a = 1;
    }
    else{
    	b = 1;
    }
    if(x2%2==y2%2){
    	a = 2;
    }
    else{
    	b = 2;
    }
    if(a==0)
    	a = 3;
    else if(b==0)
    	b = 3;
    
    for(int i=1;i<=n;++i){
    	for(int j=1;j<=m;++j){
    		if(i==x1 && j==y1){
    			cout<<1<<" ";
    			continue;
    		}
    		if(i==x2 && j==y2){
    			cout<<2<<" ";
    			continue;
    		}
    		if(i%2==j%2)
    			cout<<a;
    		else
    			cout<<b;
    		cout<<" ";
    	}
    	cout<<"\n";
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
