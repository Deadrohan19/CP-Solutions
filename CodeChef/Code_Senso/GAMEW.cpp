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
        string s;cin>>s;
        char temp=s[0];
        int count=1;
        for (int i=1;i<n;++i){
            if(s[i]!=temp){
                count++;
                temp = s[i];
            }
        }
        if (count==1)
            cout<<"SAHID";
        else if(count==2)
            cout<<"RAMADHIR";
        else{
            if((count+1)%3==0)
                cout<<"RAMADHIR";
            else
                cout<<"SAHID";
        }
        cout<<endl;
    }
}