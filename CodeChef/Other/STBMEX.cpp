/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
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

void test_case(){
    ll n;cin>>n;
    ll arr[n];
    for(auto &i: arr)
    	cin>>i;
    
    sort(arr,arr+n);
    
    ll mex,x=0;
    for(int i=0;i<n;++i){
    	if(x==arr[i]){
    		x++;
    	}
    	else if(x<arr[i]){
    		break;
    	}
    }
    mex =x;
    if(mex==0){
    	cout<<arr[0]-1;
    }
    else if(mex==1)
    	cout<<-1;
    else{
    	ll cnt=0,y=1;
    	int temp = lower_bound(arr,arr+n,mex)-arr;
    	for(int i=temp;i<n;){
			y =1;
			i++;
			while(i<n){
				if(arr[i]==arr[i-1]){
					i++;
					continue;
				}
				if(arr[i]==arr[i-1]+1)
					y++;
				else{
					break;
				}
				i++;
			}
			if(y>=mex-1)
				cnt++;
		
    	}
    	cout<<cnt;
    }
    cout<<"\n";
}

int main(){
	deadman
    
    clock_t start = clock();
    int tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
