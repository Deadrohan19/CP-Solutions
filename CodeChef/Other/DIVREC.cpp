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
#define all(x) begin(x),end(x)
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    ll x,a,b;cin>>x>>a>>b;
    if((x*b)%a || a<b){
    	cout<<-1<<"\n";
    	return;
    }
    int n = (x*b)/a;
    int n1=0;
    for(int i=1;i*i<=n;++i){
    	if(n%i==0){
    		n1 += i;
    		if(i!=n/i)
    			n1+=n/i;
    	}
    }
    if(n1==x)
    	cout<<n;
    else
    	cout<<-1;
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
