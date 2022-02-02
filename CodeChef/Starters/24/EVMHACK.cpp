/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;
#define mk make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
	int a[3],b[3],c[3];
	for(int i=0;i<3;++i)
		cin>>a[i];
	for(int i=0;i<3;++i)
		cin>>b[i];
	for(int i=0;i<3;++i){
		c[i]=b[i]-a[i];
	}
	int ans;
    if(c[0]>c[1]){
    	if(c[0]>c[2])
    		ans = a[1]+a[2]+b[0];
    	else
    		ans = b[2]+a[0]+a[1];
    }
    else{
    	if(c[1]>c[2])
    		ans = a[0]+a[2]+b[1];
    	else
    		ans = b[2]+a[0]+a[1];
    }
    float x = ((float)(b[0]+b[1]+b[2]))/2;
    if(ans>x)
    	cout<<"YES";
    else
    	cout<<"NO";
    cout<<"\n";
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
