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
        vector<vector<int>> v={{0},{1},{2}};

        //permutation of arrays
        for(int k=1;k<n;++k){
            int x = v.size();
            for(int i=0;i<2;i++){
                for(int j=0;j<x;++j)
                    v.push_back(v[j]);
            }
            int i=0;
            for(;i<x;++i)
                v[i].insert(v[i].begin(),0);
            for(;i<2*x;++i)
                v[i].insert(v[i].begin(),1);
            for(;i<3*x;++i)
                v[i].insert(v[i].begin(),2);
        }
        ll ans=0;
        for(int i=0;i<v.size();++i)
            for(int j=1;j<n-1;++j)
                if((v[i][j-1]>v[i][j] && v[i][j+1]>v[i][j]) || (v[i][j-1]<v[i][j] && v[i][j+1]<v[i][j]))
                    ans++;
                    
        cout<<ans<<endl;
        // cout<<"----------------------------------------\n";
        // for (int i = 0; i < v.size(); i++) {
        //     for (int j = 0; j < v[i].size(); j++)
        //         cout << v[i][j] << " ";
        // cout << endl;
        // }
        // cout<<"-----------------------------------------\n";
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