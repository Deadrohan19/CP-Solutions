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
    int n,k;cin>>n>>k;
    if(n>1 && k==1){
    	cout<<-1<<"\n";
    	return;
    }
    if(k==1){
    	cout<<1<<"\n";
    	return;
    }
    if(k==2){
    	cout<<1;
    	for(int i=n;i>1;--i)
    		cout<<" "<<i;
    	cout<<"\n";
    	return;
    }
    cout<<n;
    for(int i=1;i<=k-2;++i)
    	cout<<" "<<i;
    for(int i=n-1;i>k-2;--i)
    	cout<<" "<<i;
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
