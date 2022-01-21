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
        int n;cin>>n;
        string s;cin>>s;
        int cur_min =s[0],i;
        for(i=1;i<n;++i){
            if(cur_min<s[i])
                break;
            else{
                cur_min =s[i];
            }
        }
        if(s[0]==s[1])
            cout<<s[0]<<s[0];
        else{
            for(int j=0;j<i;++j)
                cout<<s[j];
            for(int j=i-1;j>=0;--j)
                cout<<s[j];
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