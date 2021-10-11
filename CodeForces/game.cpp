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
        int n,flag = 1;
        string x,y;
        cin>>n;
        cin>>x;
        cin>>y;


        for (int i=0;i<n;++i){
            if (x[i] == '1' && y[i] == '1'){
                cout<<"NO"<<endl;
                flag = 0;
                break;
           }
        }
        if (flag)
            cout<<"YES"<<endl;
    }
}