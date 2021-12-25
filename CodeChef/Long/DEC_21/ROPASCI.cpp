#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}
char rps(char a, char b){
    if(a==b)
        return a;
    else if((a=='R'&& b=='P')||(a=='P'&& b=='R'))
        return 'P';
    else if((a=='R'&& b=='S')||(a=='S'&& b=='R'))
        return 'R';
    return 'S';
}
void Code(){
    ll t;cin>>t;

    while(t--){
        ll n,count=0;cin>>n;
        string s;cin>>s;
        string out_s=s;
        for(int i=0;i<n-1;++i)
            for(int j=0;j<=i;++j){
                out_s[j] = rps(out_s[j],s[i+1]);
            }
        cout<<count<<"\n";   
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