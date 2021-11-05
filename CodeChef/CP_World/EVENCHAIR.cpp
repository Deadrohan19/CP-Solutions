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
        int n;cin>>n;
        if(n%4==0){
            if((n/4)%2==0)
                cout<<n/4<<endl;
            else
                cout<<-1<<endl;
        }
        else
            cout<<-1<<endl;
    }
}