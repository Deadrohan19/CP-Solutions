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
        string s;
        cin>>s;
        int l=s.size();
        char c= s[0];
        if (s[0] != s[l-1]){
            s[0]=c;
            s[l-1]=c;
        }
        cout<<s<<"\n";
    }
}