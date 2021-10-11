#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        deadman
    #define int long long
    int t;
    cin>>t;

    while(t--){
        int n,H;
        cin>>n>>H;
        vector<int> lst(n);
        for (int i=0;i<n;++i){
            cin>> lst[i];
        }
        int max1=0,max2=0;
        for (int first = 0;first<n;++first){
            if (max1<lst[first]){
                max2 = max1;
                max1 = lst[first];
            }
            else if (lst[first]> max2)
                max2 = lst[first];
        }
        int count = 0,flag = 1;
        count = 2*(H/(max1+max2));
        H -= (count/2)*(max1+max2);
        
        while(1){
            if (H>0){
                if (flag){
                    H -= max1;
                    count++;
                    flag = 0;
                }
                else{
                    H -= max2;
                    count++;
                    flag = 1;
                }
            }
            else
                break;
        }
        cout<<count<<endl;
    }
}