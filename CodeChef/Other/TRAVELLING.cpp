#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
const int N = (2*1e5)+10;

int parent[N];
int size[N];

void make(int v){
    parent[v]=v;
}

int find(int v){
    if(v==parent[v]) return v;
    //path compression
    return parent[v] = find(parent[v]);
}

void Union(int a,int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        //Union by size
        if(size[a]<size[b])
            swap(a,b);
        parent[b]=a;
    }
}

map<ll,pair<ll, ll>> m; // [parent,(min,max)]

void solve(){
    ll n,m;cin>>n>>m;
    for(int i=1;i<=n;++i)
        make(i);
    for(int i=0;i<m;++i){
        int a,b;cin>>a>>b;
        Union(a,b);
    }
    if(find(1)==find(n))
        cout<<0;
    else{
        for(int i=1;i<=n;++i){
            int temp = find(i);
            if(temp!=i){
                // if(m[temp].ff==0)
            }
            
                
        }
        
    }
    cout<<"\n";
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}