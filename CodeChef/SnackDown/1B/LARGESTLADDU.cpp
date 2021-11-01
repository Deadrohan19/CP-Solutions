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
        int x;
        cin>>x;
        int n = pow(2,x);
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];

        int temp_max=arr[0],temp_min=arr[0];
        bool flag = 1;
        for (int i=1;i<n;++i){
            if(temp_max<arr[i])
                temp_max = arr[i];
            if(temp_min>arr[i])
                temp_min = arr[i];
            if((temp_max-temp_min)>1){
                flag =0;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<"\n";
    }
}