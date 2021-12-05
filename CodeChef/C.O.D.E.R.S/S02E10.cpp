#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void Code(){
    ll t;cin>>t;

    while(t--){
        ll n,x,k;cin>>n>>x>>k;
        ll a[n],b[n];
        for (int i=0;i<n;++i)
            cin>>a[i];
        for (int i=0;i<n;++i)
            cin>>b[i];
        ll count=0;
        for(int i=0;i<n;++i)
            if(abs(a[i]-b[i])<=k)
                count++;
        cout<<((count>=x)?"YES":"NO")<<"\n";
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