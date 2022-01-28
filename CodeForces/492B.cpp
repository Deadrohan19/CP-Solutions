/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;
#define mk make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    ll n,l;cin>>n>>l;
    ll arr[n];
    for(int i=0;i<n;++i)
    	cin>>arr[i];
    sort(arr,arr+n);
    ll ans = max(arr[0],(int)l-arr[n-1]);
    ll d=INT_MIN;
    for(int i=1;i<n;++i)
        d = max(d,arr[i]-arr[i-1]);
    cout<<fixed<<setprecision(10);
    cout<< max((ld)ans,(ld)d/2)<<"\n";
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
