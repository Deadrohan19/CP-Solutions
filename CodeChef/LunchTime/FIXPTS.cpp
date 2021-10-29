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
        int n;
        cin>>n;
        int lst[n];
        for (int i=0;i<n;++i)
            cin>>lst[i];
        
        int fixed = 0;

        for (int i=0;i<n;++i){
            if ((lst[i]-i)<2)
                fixed += n-i;
        }
        cout<<fixed<<endl;
    }
}