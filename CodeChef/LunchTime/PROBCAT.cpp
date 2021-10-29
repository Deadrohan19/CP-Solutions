#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        if (n<100)
            cout<<"Easy"<<endl;
        else if(n<200)
            cout<<"Medium"<<endl;
        else
            cout<<"Hard"<<endl;
    }
}