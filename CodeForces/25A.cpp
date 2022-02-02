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
    int even_cnt=0,odd_cnt=0;
    int even,odd,cnt=0;
    while(n--){
    	cnt++;
    	int x;cin>>x;
    	if(x&1){
    	    odd=cnt;
    	    odd_cnt++;
		}
    	else{
    		even=cnt;
    		even_cnt++;
    	}
    }
    if(even_cnt==1)
    	cout<<even;
    else
    	cout<<odd;
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
