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
       string s;cin>>s;
       int count=0;
       for(int i=0;i<s.size();++i)
            if(s[i]=='1')
                count++;
        int sum=0,temp=s.size();
        while(count--){
            temp--;
            sum += pow(2,temp);
        }
        cout<<sum<<endl;
    }
}