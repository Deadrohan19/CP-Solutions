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
    #define float double
    
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;
        int D = 1 + 8*k;
        float x = (-1 + sqrt(D))/2;
        float y = (-1 - sqrt(D))/2;

        x = max(x,y);
        int n = x;
        if(n==x)
            cout<<2*n<<"\n";
        else
            cout<<2*(n+1)<<"\n";
    }
}