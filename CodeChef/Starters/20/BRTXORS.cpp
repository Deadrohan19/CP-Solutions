#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

ll power(ll x){
    ll multi =2;
    for(int i=1;i<x;++i){
        multi*=2;
        multi%=1000000007;
    }
    return multi;
}

void Code(){
    ll t;cin>>t;

    while(t--){
        ll n;cin>>n;
        if(n<3)
            cout<<n<<"\n";
        
        else{
            ll x = log2(n);
            if(x==log2(n))
                cout<<power(x+1)-1;
            else
                cout<<power(x+1);
            cout<<"\n";
        }    
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    
    clock_t start = clock();
    Code();
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}