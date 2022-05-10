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
pr
void test_case(){
    ll n;cin>>n;
    int arr[n];
    for(auto &i: arr)cin>>i;
    sort(arr,arr+n);
	
	int PS[n],SS[n];
	PS[0]=arr[0];SS[n-1]=arr[n-1];
	for(int i=1;i<n;++i)
		PS[i]=PS[i-1]+arr[i];
	for(int i=n-2;i>=0;--i)
		SS[i]=SS[i+1]+arr[i];
	
	if(PS[n-1]==0){
		cout<<0<<"\n";
		return;
	}
	ll mn= INF;
	for(int i=0;i<n-1;i++){
		mn = min(mn, abs(SS[i+1]-PS[i])-(n-1-i));
	}
	if(mn<1)
		cout<<1;
	else
		cout<<mn+1;
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
