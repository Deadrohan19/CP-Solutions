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
        int n,m,a,b,x,y;
        cin>>n>>m>>a>>b>>x>>y;
        int ans=0,r=1,c=1;
        bool flag=1;

        while(flag){
            if(a==n)
                r *=-1;
            if(b==m)
                c *=-1;
            if(a==x || b==y)
                flag=0;
            else
                ans++;
            a += r; b+=c;
        }
        cout<<ans<<endl;
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