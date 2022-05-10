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
#define mod 1000000007
#define INF LLONG_MAX
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//functions
int popcount(int x){return __builtin_popcount(x);}
ll mx,neg,no_2;
pair<int, int>	ans;

void calc(ll arr[], int l, int r, int n){
	
	if(neg&1){
		ll temp=0;
		int i;
		for(i=l;i<r;++i){
			if(abs(arr[i])==2)
    			temp++;
			if(arr[i]<0)
				break;
		}
			
		if((no_2-temp)>mx){
			ans = {i+1,n-r};
			mx = no_2-temp;
		}
		temp =0;
		
		for(i=r-1;i>=0;--i){
			if(abs(arr[i])==2)
    			temp++;
			if(arr[i]<0)
				break;
		}
		
		if((no_2-temp)>mx){
			ans = {l,n-i};
			mx = no_2-temp;
		}
	}
	else{
		if(no_2>mx){
			ans = {l,n-r};
			mx = no_2;
		}
	}
}

void test_case(){
    ll n;cin>>n;
    ll arr[n];
    for(auto &i: arr)
    	cin>>i;
    
    ans={n,0};
    mx =0;
    neg =0,no_2=0;
    int l=0;
    for(int i=0;i<n;++i){
    	if(arr[i]==0){
    		calc(arr,l,i,n);
    		neg =0,no_2=0;
    		l=i+1;
    	}
    	else{
    		if(arr[i]<0)
    			neg++;
    		if(abs(arr[i])==2)
    			no_2++;
    	}
    }
    calc(arr,l,n,n);
    
    cout<<ans.F<<" "<<ans.S<<"\n";
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