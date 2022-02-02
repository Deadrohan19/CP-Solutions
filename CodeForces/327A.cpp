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
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    	cin>>arr[i];
    
	int x=0,ans=0,cnt=0;
	int i=0;
	
    while(i<n){
    	if(arr[i]==0)
    		x++;
    	else
    		x--,cnt++;
    	
    	if(x<0){
    		x=0,cnt--;
    		while(arr[i]==1 && i<n)
    			i++,cnt++;
    	}
    	else
    		i++;
    	ans = max(x,ans);
    }
    if(n==cnt)
    	cout<<n-1;
    else
	    cout<<ans+cnt;
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
