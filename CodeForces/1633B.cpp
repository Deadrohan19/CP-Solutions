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
    string s;cin>>s;
    int zero_cnt=0,one_cnt=0;
    for(int i=0;i<s.length();++i)
    	if(s[i]=='0')
    		zero_cnt++;
    one_cnt=s.length()-zero_cnt;
    
    if(one_cnt==zero_cnt){
    	if(one_cnt==1)
    		cout<<0;
    	else
    		cout<<one_cnt-1;
    }
    else
    	cout<<min(one_cnt,zero_cnt);
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
