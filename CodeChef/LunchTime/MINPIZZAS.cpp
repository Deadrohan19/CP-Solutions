#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

long long big_mod(long long n){
    return n % 1000000007;
}

long long GCD(long long a,long long b){
    if (a==0)
        return b;
    return GCD(b%a,a);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    #define int long long
    
    int t;
    cin>>t;

    while(t--){
        int n,k;cin>>n>>k;
        cout<<n/GCD(n,k)<<"\n";
    }
}