#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void Code(){
    ll t;cin>>t;

    while(t--){
        int n;cin>>n;
        int arr[n];
        for (int i=0;i<n;++i)
            cin>>arr[i];
        bool equal=1;
        int temp=arr[0];
        for(int i=0;i<n;++i){
            if(equal && arr[i]!=temp)
                equal=0;
            if(temp<arr[i])
                temp = arr[i];
        }
        if(equal)
            cout<<0;
        else if(temp==arr[n-1])
            cout<<1;
        else
            cout<<2;
        cout<<"\n";
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    
    clock_t start = clock();
    Code();
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}