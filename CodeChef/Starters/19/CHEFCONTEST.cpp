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
        int x,y,p,q;cin>>x>>y>>p>>q;
        int chef = x+(p*10);
        int chefina = y+(q*10);
        if(chef>chefina)
            cout<<"Chefina";
        else if(chef<chefina)
            cout<<"Chef";
        else 
            cout<<"Draw";
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