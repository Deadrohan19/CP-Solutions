/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define ld long double
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void test_case(){
    int n;cin>>n;
    int arr[n];
    ld sum=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum += arr[i];
    }
    int max = *max_element(arr,arr+n);
    ld ans = max;
    ans += (sum-max)/(n-1);

    cout<<fixed<<setprecision(6);
    cout<<ans<<"\n";

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
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