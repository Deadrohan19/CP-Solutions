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
        ll n,m;cin>>n>>m;
        ll l,extra=0;
        if(n==m){
            l = n+1;
            cout<<2*l<<"\n";
            for(int i=0;i<l;++i)
                cout<<"10";
        }
        //Valley
        else if(m>n){
            cout<<3*m-n<<"\n";
            int extra = m-n-1;
            for(int i=0;i<m;++i){
                cout<<"10";
                if(extra){
                    cout<<"1";
                    extra--;
                }
            }
            cout<<"1";
        }
        //Hill
        else{
            cout<<3*n-m<<"\n";
            int extra = n-m-1;
            cout<<"0";
            for(int i=0;i<n;++i){
                cout<<"10";
                if(extra){
                    cout<<"0";
                    extra--;
                }
            }
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