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


void test_case(){ 
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;++i)
    	cin>>arr[i];
    ll odd0=0,even0=0,odd1=0,even1=0;
    ll a= 0,b= 0;
    for(int i=0;i<n;i+=2){
    	if(arr[i]==0){
    		even0++;
    		continue; 
    	}
    	if(arr[i]&1){
    		odd0++;
    		a=i+1;
    	}
    	else
    		even0++;
    }
    for(int i=1;i<n;i+=2){
    	if(arr[i]==0){
    		even1++;
    		continue; 
    	}
    	
    	if(arr[i]&1){
    		odd1++;
    		b=i+1;
    	}
    	else
    		even1++;
    }
    if(even0+even1==n){ // all elements are even OR 0th and 1th both have zero{0} in it
    	cout<<-1<<"\n";
    	return;
    }
    
    if((odd0 + even1) < (odd1 + even0)){  // 0th even is chosen {EOEOEOEO}
    	cout<<odd0+even1<<"\n";
    	for(int i=0;i<n;i+=2)
    		if(arr[i]&1)
    			cout<<i+1<<" "<<b<<"\n";
    	for(int i=1;i<n;i+=2)
    		if(!(arr[i]&1))
    			cout<<i+1<<" "<<b<<"\n";
    }
    else{ //0th odd is chosen {OEOEOEOEOEOE}
    	cout<<odd1+even0<<"\n";
    	for(int i=0;i<n;i+=2)
    		if(!(arr[i]&1))
    			cout<<i+1<<" "<<a<<"\n";
    	for(int i=1;i<n;i+=2)
    		if(arr[i]&1)
    			cout<<i+1<<" "<<a<<"\n";
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