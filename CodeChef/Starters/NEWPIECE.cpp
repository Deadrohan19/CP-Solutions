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
        int a,b,p,q;cin>>a>>b>>p>>q;
        if(a==p && b==q)
            cout<<0;
        else if((a+b)%2==(p+q)%2)
            cout<<2;
        else
            cout<<1;
        cout<<"\n";
    }
}