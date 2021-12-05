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
        int s,a,b;
        float c;
        cin>>s>>a>>b>>c;
        double num = (1+c/100)*s;
        if(num>=a && num<=b)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }
}