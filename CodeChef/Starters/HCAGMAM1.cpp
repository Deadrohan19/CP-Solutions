#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        deadman
    
    int t;
    cin>>t;

    while(t--){
        int x,y,count=0,streak=1,max_streak=0;
        cin>>x>>y;
        string s;
        cin>>s;
        for (int i=0;i<30;i++){
            if (s[i]=='1')
                count++;
            streak = 0;
            for(int j=i;j<30;j++){
                if (s[j]=='1')
                    streak++;
                else
                    break;
            }
            if (streak>max_streak)
                max_streak = streak;
        }
        cout<<count*x + max_streak*y<<endl;
    }
}