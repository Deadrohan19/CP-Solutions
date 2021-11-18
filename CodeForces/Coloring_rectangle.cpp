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
        int n,m;cin>>n>>m;
        int total=0;

        if(n<3 && m<3){
            if(n==1 || m==1)
                total=1;
            else
                total=2;
        }
        else if(n%3==0){
            total +=(n/3)*m;
        }
        else if(m%3==0){
            total += (m/3)*n;
        }
        else{
            while(1){
                if((n==1 && m==4) || (n==4 && m==1 || (n==2 && m==2))){
                    total +=2;
                    break;
                }
                else if((n==1 && m==2) || (m==1 && n==2)){
                    total += 1;
                    break;
                }
                else if(n>3){
                    n = n-3;
                    total +=m;
                }
                else if(m>3){
                    m =m-3;
                    total +=n;
                }

            }
        }
        cout<<total;
        cout<<"\n";
    }
}