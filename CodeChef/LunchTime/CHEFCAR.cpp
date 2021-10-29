#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


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
        int n,v;
        cin>>n>>v;
        int x = n -v;
        if (n>v)
            cout<<(n*(n-1))/2<<" "<<v-1 + (x*(x+1))/2<<endl;
        else
            cout<<(n*(n-1))/2<<" "<<n-1<<endl;
    }
}