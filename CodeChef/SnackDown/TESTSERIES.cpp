#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        deadman
    
    int t;
    cin>>t;

    while(t--){
        int r[5];
        int ind=0,eng=0;
        for (int i=0;i<5;++i)
            cin>>r[i];
        for(int i=0;i<5;++i){
            if(r[i] == 1)
                ind++;
            else if (r[i] == 2)
                eng++;
        }
        cout<<(ind>eng?"INDIA":ind==eng?"DRAW":"ENGLAND")<<endl;
    }
}