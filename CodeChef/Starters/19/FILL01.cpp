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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        int nap=0,count=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='0'){
                count++;
                if(count==k){
                    nap++;
                    count=0;
                }
            }
            else
                count=0;
        }
        cout<<nap<<endl;
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