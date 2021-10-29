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
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        

        if (p%a==0 && q%b==0)
            if ((p/a-q/b)==0 || (p/a-q/b)==1 || (p/a-q/b)==-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        else
            cout<<"NO"<<endl;
    }
}