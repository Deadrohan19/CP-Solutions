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
        bool flag=0;
        int arr[n];
        for (int i=0;i<n;++i)
            cin>>arr[i];
        
        sort(arr,arr+n);
        vector<int> v;

        for (int i=0;i<n-2;++i){
            if(arr[i]==arr[i+1]){
                v.push_back(arr[i]);
                ++i;
                if(arr[i]==arr[i+1]){
                    flag=1;break;
                }
            }
        }
        if(arr[n-1]==arr[n-2])
            flag=1;
        if(flag)
            cout<<-1<<"\n";
        else{
            for(auto it: v)
                cout<<it<<" ";
            for(int i=n-1;i>=0;--i){
                if(i!=0 && arr[i]==arr[i-1])
                    i--;
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
}