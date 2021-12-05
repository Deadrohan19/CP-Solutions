#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

long long big_mod(long long n){
    return n % 1000000007;
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
        int a,b;cin>>a>>b;
        int x = (a+b)/4;
        if(x>min(a,b))
            cout<<min(a,b);
        else
            cout<<x;

        cout<<"\n";
    }
}