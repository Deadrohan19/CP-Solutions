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
        int a,b,c;cin>>a>>b>>c;
        int x= 2*b-(a+c);   
        if(x%3==0)
            cout<<0;
        else
            cout<<1;
        cout<<"\n";
    }
}