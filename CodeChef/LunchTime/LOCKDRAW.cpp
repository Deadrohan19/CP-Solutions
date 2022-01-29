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
    int arr[3];
    for(int i=0;i<3;++i)
    	cin>>arr[i];
    sort(arr,arr+3);
    if(arr[0]+arr[1]==arr[2])
    	cout<<"YES";
    else
    	cout<<"NO";
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
