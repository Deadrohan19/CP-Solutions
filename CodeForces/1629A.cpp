// Problem: A. Download More RAM
// Contest: Codeforces - Codeforces Round #767 (Div. 2)
// URL: https://codeforces.com/contest/1629/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*Debugging: 
1. Forgot to take input of test_case
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define mk make_pair
#define pb push_back
#define F first
#define S second
#define endl "\n"
#define MOD 1e9+7
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void test_case(){
    int n,k;cin>>n>>k;
    int usage[n],increment[n];
    for(int i=0;i<n;++i)
    	cin>>usage[i];
    for(int i=0;i<n;++i)
    	cin>>increment[i];
    vector<pair<int,int>> v;
    
    for(int i=0;i<n;++i)
    	v.pb(mk(usage[i],increment[i]));
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;++i){
    	if(k>=v[i].F)
    		k+=v[i].S;
    	else
    		break;
    }
    cout<<k<<"\n";
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