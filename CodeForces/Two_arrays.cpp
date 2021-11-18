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
        int arr1[n];
        for (int i=0;i<n;++i)
            cin>>arr1[i];
        int arr2[n];
        for (int i=0;i<n;++i)
            cin>>arr2[i];
        
        sort(arr1, arr1+n);
        sort(arr2, arr2+n);
        bool flag=1;

        for(int i=0;i<n;++i){
            if(arr2[i]-arr1[i]==0);
            else if(arr2[i]-arr1[i]!=1){
                flag=0;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<"\n";
    }
}