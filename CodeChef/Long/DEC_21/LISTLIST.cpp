#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

ll mostFrequent(ll arr[], ll n)
{
    unordered_map<ll, ll> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    int max_count = 0, res = -1;
    for (auto i : hash) 
        if (max_count < i.second)
            max_count = i.second;
 
    return max_count;
}

void Code(){
    ll t;cin>>t;

    while(t--){
        ll n;cin>>n;
        ll arr[n];
        for (int i=0;i<n;++i)
            cin>>arr[i];

        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        ll freq=mostFrequent(arr,n);
        if(freq==1)
            cout<<-1;
        else if(freq==n)
            cout<<0;
        else
            cout<<(n-freq)+1;
        
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