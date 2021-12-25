#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll big_mod(ll n){
    return n % 1000000007;
}

void Code(){
    ll t;cin>>t;

    while(t--){
        //inputs
        int xk,yk,x1,y1,x2,y2;
        cin>>xk>>yk>>x1>>y1>>x2>>y2;
        bool flag=0;
        
        if(xk==1 && yk==1){
            if(x1==2 || x2==2){
                if(y1 != 2 && y2!=2 && y1!=y2)
                    flag=1;
            }    
            else if(y1==2 || y2==2)
                if(x1!=2 && x2!=2 && x1!=x2)
                    flag=1;
        }
        else if(xk==1 && yk==8){
            if(x1==2 || x2==2){
                if(y1 != 7 && y2!=7 && y1!=y2)
                    flag=1;
            }    
            else if(y1==7 || y2==7)
                if(x1!=2 && x2!=2 && x1!=x2)
                    flag=1;
        }
        else if(xk==8 && yk==1){
            if(x1==7 || x2==7){
                if(y1 != 2 && y2!=2 && y1!=y2)
                    flag=1;
            }    
            else if(y1==2 || y2==2)
                if(x1!=7 && x2!=7 && x1!=x2)
                    flag=1;
        }
        else if(xk==8 && yk==8){
            if(x1==7 || x2==7){
                if(y1 != 7 && y2!=7 && y1!=y2)
                    flag=1;
            }    
            else if(y1==7 || y2==7)
                if(x1!=7 && x2!=7 && x1!=x2)
                    flag=1;
        }
        else if(xk==1 && (x1==2 || x2==2)){
            if((y1>(yk+1)||y1<(yk-1))&&(y2>(yk+1)||y2<(yk-1))&&y1!=y2)
                flag=1;
        }
        else if(xk==8 && (x1==7 || x2==7)){
            if((y1>(yk+1)||y1<(yk-1))&&(y2>(yk+1)||y2<(yk-1))&&y1!=y2)
                flag=1;
        }
        else if(yk==1 && (y1==2 || y2==2)){
            if((x1>(xk+1)||x1<(xk-1))&&(x2>(xk+1)||x2<(xk-1))&&x1!=x2)
                flag=1;
        }
        else if(yk==8 && (y1==7 || y2==7)){
            if((x1>(xk+1)||x1<(xk-1))&&(x2>(xk+1)||x2<(xk-1))&&x1!=x2)
                flag=1;
        }
        
        cout<<(flag?"YES":"NO")<<"\n";
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
        deadman
    
    clock_t start = clock();
    Code();
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}