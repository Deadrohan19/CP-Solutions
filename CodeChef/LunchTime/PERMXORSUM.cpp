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

ll custPow(ll x){
	x = log2(x);
	x = pow(2,x+1);
	return x-1;
}

void test_case(){
    ll n;cin>>n;
    ll ans =0;
    ll x = custPow(n),y=n;
    for(int i=n;i>0;i--){
    	if((x-i)>y){
    		y=i;
    		x=custPow(i);
    		i++;
    	}
    	else
    		if(x!=i)
    			ans+=(x-i)^i;
    }
    cout<<ans<<"\n";
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
