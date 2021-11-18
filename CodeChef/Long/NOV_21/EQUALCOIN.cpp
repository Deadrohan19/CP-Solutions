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
        int x,y;cin>>x>>y;
        bool flag = 0;
        if(x==0){
            if(y%2==0)
                flag =1;
        }
        else if((x+y*2)%2==0)
            flag =1;
        cout<<(flag?"YES":"NO")<<endl;
    }
}