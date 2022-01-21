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
        int n,m,r,c;cin>>n>>m>>r>>c;
        string s[n];
        bool flag=1;
        for(int i=0;i<n;++i)
            cin>>s[i];
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if(s[i][j]=='B')
                    flag=0;
        if(flag)
            cout<<-1;
        else if(s[r-1][c-1]=='B')
            cout<<0;
        else{
            bool flag1=0,flag2=0;
            for(int i=0;i<n;++i)
                if(s[i][c-1]=='B')
                    flag1=1;
            for(int j=0;j<m;++j)
                if(s[r-1][j]=='B')
                    flag2=1;
            if(flag1 || flag2)
                cout<<1;
            else
                cout<<2;
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