/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;
#define mk make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    vector<pair<int, char>> vec;
    for(int i=0;i<26;++i){
        vec.pb({0,i+97});
    }
    int n;cin>>n;
    string s;cin>>s;
    if(n&1){cout<<"NO\n"; return;}
    
    for(int i=0;i<n;++i)
        vec[s[i]-97].F++;
    
    for(auto i : vec)
        if(i.F>(n/2)){
            cout<<"NO\n";
            return;
        }
    sort(vec.begin(), vec.end());
    cout<<"YES\n";
    ll cnt=0;
    bool flag=false;
    pair<char,int> p{0,0};
    for(auto i: vec){
        for(int j=0;j<i.F;++j){
            if(cnt==(n/2) && j!=0){
                p.F=i.S;
                p.S = i.F-j;
                flag=true;
                break;
            }
            cout<<i.S;
            cnt++;
        }
    }
    if(flag){
        for(int i=0;i<p.S;++i)
            cout<<p.F;
    }
    cout<<"\n";
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}