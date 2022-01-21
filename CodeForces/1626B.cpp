#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void test_case(){
    string x;cin>>x;
    for(ll i=x.size()-2;i>=0;--i){
        if(x[i]+x[i+1]-96>9){
            cout<<x.substr(0,i)<<x[i]+x[i+1]-96<<x.substr(i+2)<<'\n';
            return;
        }
    }
    cout<<x[0]+x[1]-96<<x.substr(2)<<"\n";
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    
    clock_t start = clock();
    ll tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}