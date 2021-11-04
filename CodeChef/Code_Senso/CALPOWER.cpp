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
        
        for(int i=0;i<s.size();++i){
            int temp_min =INT_MAX,temp_index;
            for(int j=i;j<s.size();++j){
                if(s[j]<temp_min){
                    temp_index = j;
                    temp_min = s[j];
                }
            }
            s[temp_index]=s[i];
            s[i]=temp_min;
        }
        int sum = 0;
        for(int i=0;i<s.size();++i){
            sum += (i+1)*(s[i]-96);
        }   
        cout<<sum<<endl;
    }
}