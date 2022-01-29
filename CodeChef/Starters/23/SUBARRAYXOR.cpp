/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
#define ld long double
#define mk make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define num 100000 + 10

vector<int> ans(num);

void preprocess(){
    ans[1]=1;
    int pw=2,index=2;
    
    while(index< num){
        ans[index]= pw;
        int N = index;
        index++;
        for(int i=1;i<N && index<num;i++)
            ans[index++]=ans[i];
        
        pw *=2;
    }
    // for(int i=1;i<60;++i)
    //     cout<<ans[i]<<" ";
}

void test_case(){
    int n;cin>>n;
    for(int i=1;i<=n;++i)
        cout<<ans[i]<<" ";
    cout<<"\n";
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    preprocess();
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
