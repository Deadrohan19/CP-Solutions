/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define ld long double
#define mk make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<n;++i)
        cin>>b[i];
    int mx_b = *max_element(b,b+n);
    int mx_a = *max_element(a,a+n);
    vector<pair<int,int>> vec;
    if(mx_a>mx_b)
        for(int i=0;i<n;++i){
            pair<int,int> p;
            p.F = b[i];
            p.S = a[i];
            vec.pb(p);
        }
    else
        for(int i=0;i<n;++i){
            pair<int,int> p;
            p.F = a[i];
            p.S = b[i];
            vec.pb(p);
        }
    sort(vec.begin(),vec.end());
    int ans = max(mx_b,mx_a);
    int x=0,y;
    for (int i=n-1;i>=0;--i){
        if(vec[i].F>vec[i].S){
            x = max(vec[i].S,x);
        }
        else{
            y =vec[i].F;
            break;
        }
    }
    ans *= max(x,y);
    
    cout<<ans<<"\n";
    
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
