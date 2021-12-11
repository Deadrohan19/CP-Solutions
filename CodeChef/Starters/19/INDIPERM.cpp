#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void Code(){
    ll t;cin>>t;

    while(t--){
        ll n;cin>>n;
        ll odd=1,even=2;
        if(n&1){ //odd
            for(int i=0;i<(n/2)-1;++i){
                cout<<even<<" ";
                cout<<odd<<" ";
                even +=2;
                odd += 2;
            }
            cout<<even<<" "<<odd+2<<" "<<odd;
        }
        else
            for(int i=0;i<(n/2);++i){
                cout<<even<<" ";
                cout<<odd<<" ";
                even +=2;
                odd += 2;
            }
        cout<<"\n";
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