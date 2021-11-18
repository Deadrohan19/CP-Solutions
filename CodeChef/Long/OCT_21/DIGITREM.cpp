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
        ll n,d;
        cin>>n>>d;
        ll value= 0, i=n;
        int counter = 0,last =12;

        if (d==0){
            do{
                if (i%10 == d)
                    last = counter;
                ++counter;
                i/=10;
            }while(i>0);
            if (last == 12)
                cout<<0<<endl;
            else{
                ll power = pow(10,last+1);
                for (int i=last;i>=0;--i)
                    value += 1*pow(10,i);
                cout<<value - n%power<<endl;
            }
        }
        else if(d==9){
            for (;i>0;i /=10){
                if (i%10 == d)
                    last = counter;
                ++counter;
            }
            for (;(int)(n/pow(10,last+1))%10==8;++last);

            if (last == 12)
                cout<<0<<endl;
            else{
                ll power = pow(10,last+1);
                cout<<(d+1)*(power/10) - n%power<<endl;
            }
        }
        else{
            for (;i>0;i /=10){
                if (i%10 == d)
                    last = counter;
                ++counter;
            }
            if (last == 12)
                cout<<0<<endl;
            else{
                ll power = pow(10,last+1);
                cout<<(d+1)*(power/10) - n%power<<endl;
            }
        }
    }  
}