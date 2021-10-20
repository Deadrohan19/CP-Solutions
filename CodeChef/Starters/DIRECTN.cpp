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
        int n,flag = 0;
        cin>>n;
        string s;
        cin>>s;
        
        for (int i=0;i<(n-1);i++)
            if (s[i]==s[i+1]){
                flag = 1;
                break;
            }
        cout<<(flag?"YES":"NO")<<endl;
    }
}