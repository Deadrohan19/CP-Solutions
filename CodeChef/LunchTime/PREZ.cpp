/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = unsigned long long;
using ld = long double;
#define mk make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    	
    ll a[n];
    for(ll i=0;i<n;++i)
    	if(s[i]!='0')
    		a[i]=58-s[i];
    	else
    		a[i]=0;
    	
    if(k<(a[0])){
		cout<<0<<"\n";
		return;
	}
    vector<ll> ans;
    for(ll i=1;i<n;++i)
    	if(a[i-1]<a[i])
    		ans.pb(i);
    
    if(k%10 < a[0])
    	k=(k/10)-1;
    else
    	k/=10;
    if(k==-1)
    	k=0;
    
    if(ans.size()==0 || k>=ans.size())
    	cout<<n;
    else
    	cout<<ans[k];
    
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
