#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    #define int long long
    
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int x = ceil(log2(k));
        int y=pow(2,x);
        if (n>=y){
            n -= y;
            int z;
            if(n%k !=0)
                z= n/k +1;
            else
                z = n/k;
            cout<<x + z<<"\n";
        }
        else
            cout<<x<<"\n";

    }
}