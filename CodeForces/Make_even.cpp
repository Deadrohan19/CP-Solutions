#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

long long big_mod(long long n){
    return n % 1000000007;
}

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
        string s;cin>>s;
        if(s[s.size()-1]%2==0)
            cout<<0;
        else if(s[0]%2==0)
            cout<<1;
        else{
            bool flag=0;
            for(int i=0;i<s.size();++i)
                if(s[i]%2 ==0){
                    flag=1;
                    break;
                }
            cout<<(flag?2:-1);
        }
        cout<<"\n";
    }
}