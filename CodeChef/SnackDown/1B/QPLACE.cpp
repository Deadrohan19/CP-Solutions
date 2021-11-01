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
        int n;
        cin>>n;
        if(n%2!=0)
            for(int i=n;i>0;--i){
                if(i==n || i==1)
                    for(int j=0;j<n;++j)
                        cout<<".";
                else
                    for(int j=1;j<=n;++j){
                        if(j==i)
                            cout<<"Q";
                        else
                            cout<<".";
                    }
                cout<<endl;
            }
        else if(n==4){
            cout<<"...Q\n....\n.Q..\n....\n";
        }
        else
            for(int i=n;i>0;--i){
                if(i==n || i==1)
                    for(int j=1;j<=n;++j)
                        cout<<".";
                else if(i == n/2){
                    for(int j=1;j<=n;++j)
                        if(j==n/2 +1)
                            cout<<"Q";
                        else
                            cout<<".";
                }
                else if (i ==n/2 +1){
                    for(int j=1;j<=n;++j)
                        if(j==n/2)
                            cout<<"Q";
                        else
                            cout<<".";
                }
                else
                    for(int j=1;j<=n;++j)
                        if (j==i)
                            cout<<"Q";
                        else
                            cout<<".";
                cout<<endl;
            }
    }
}