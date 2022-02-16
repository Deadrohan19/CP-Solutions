/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
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

vector<ll> arr;

ll search(ll q){
	ll low =0, high=arr.size()-1;
	ll ans=high;
	while(low<=high){
		ll mid = ((low + high)>>1);
		if(arr[mid]>=q){
			if(arr[mid]<arr[ans])
				ans =mid;
			high =mid-1;
		}
		else
			low = mid+1;
	}
	return ans+1;
}

void test_case(){
	ll n;cin>>n;
	arr = vector<ll>(n);
	cin>>arr[0];
	ll x;
	for(ll i=1;i<n;++i){
		cin>>x;
		arr[i]=x+arr[i-1];
	}
	ll m;cin>>m;
	while(m--){
		ll q;cin>>q;
		cout<<search(q)<<"\n";
	}
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    // cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
