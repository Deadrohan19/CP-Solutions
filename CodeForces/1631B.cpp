/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define ld long double
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
    int x = arr[n-1];
    int y =1,ans=0;
    for(int i=n-2;i>=0;){
    	if(arr[i]!=x){
    		i-=y;
            y *= 2;
    		ans++;
    	}
        else{
            y++;
            --i;
        }
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