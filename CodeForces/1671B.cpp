#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    ll n;cin>>n;
    ll arr[n];
    for(auto &i: arr)
        cin>>i;
    
    int three,two;
    three = two = 0;
    
    for(int i=1;i<n;++i){
        int x =arr[i]-arr[i-1];
        if(x==2){
            two++;
        }
        else if(x==3)
            three++;
        else if(x>3){
            cout<<"NO\n";
            return;
        }
    }
    
    bool flag = false;
    
    if(three<2 && !two)
        flag = true;
    else if(two<3 && !three)
        flag = true;
    
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<"\n";
    
}


int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
}
