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
        array<char, 3> a;
        for(int i=0;i<3;++i)
            cin>>a[i];
        char x,y;cin>>x>>y;
        int x_loc,y_loc;
        for(int i=0;i<3;++i)
            if(a[i]==x)
                x_loc=i;
        for(int i=0;i<3;++i)
            if(a[i]==y)
                y_loc=i;
        cout<<a[min(x_loc,y_loc)]<<"\n";
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