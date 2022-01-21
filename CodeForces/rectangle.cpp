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
        ll a,b,c;cin>>a>>b>>c;
        if((a+b)==c || (b+c)==a || (a+c)==b)
            cout<<"YES";
        else if((a==b && (c%2==0)) || (b==c && (a%2==0)) || (a==c && (b%2==0)))
            cout<<"YES";
        else    
            cout<<"NO";
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