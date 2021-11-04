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
        int arr[n];
        for (int i=0;i<n;++i)
            cin>>arr[i];
        cout<<(arr[0]&arr[1])<<" ";
        for (int i=1;i<(n-1);++i)
            cout<<max((arr[i]&arr[i+1]),(arr[i-1]&arr[i]))<<" ";
        cout<<(arr[n-2]&arr[n-1])<<endl;
    }
}