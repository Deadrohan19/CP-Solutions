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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a+b+c<=d)
            cout<<1<<endl;
        else if ((a+b)<=d || (a+c)<=d || (b+c)<d)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
}