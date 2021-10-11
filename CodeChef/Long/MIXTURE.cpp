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
        int a,b;
        cin>>a>>b;
        if (a==0 && b>0)
            cout<<"Liquid"<<endl;
        else if (b==0 && a>0)
            cout<<"Solid"<<endl;
        else
            cout<<"Solution"<<endl;
    }
}