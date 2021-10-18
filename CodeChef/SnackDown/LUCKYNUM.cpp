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
    //initialization
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        (a==7 || b==7 || c==7)?cout<<"YES\n":cout<<"NO\n";
    }
}