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
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;++i)
            cin>>arr[i];

        int max_index = 0,digi_add=arr[0]-1;

        for (int i=1;i<n;++i){
            if (arr[i]>arr[max_index] && (arr[i]-(i+1))>digi_add){
                max_index =i;
                digi_add = arr[i]-(i+1);
            }
        }
        
        cout<<digi_add<<endl;
    }
}