#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        deadman
    
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll x = log2(n);
        ll y = pow(2,x);
        cout<< max((n+1)-y,y/2) <<endl;
    }
}