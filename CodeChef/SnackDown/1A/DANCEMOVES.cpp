#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if (x<y){
            if (abs(x)%2==abs(y)%2){
                cout<<(y-x)/2<<"\n";
            }
            else{
                cout<<(y-x)/2+2<<endl;
            }
        }
        else
            cout<<x-y<<endl;
    }
}