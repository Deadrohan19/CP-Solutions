/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
3. In nested for loop check if you hv writeen ++i instead of ++j.😢 
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;
#define mp make_pair
#define all(x) begin(x),end(x)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define INF (int)1e9
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    ll n,k;cin>>n>>k;
    ll a = (k/(n-1))*n;
    ll b;
    if(k%(n-1))
    	b=k%(n-1);
    else
    	b=-1;
    cout<<a+b<<"\n";
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
