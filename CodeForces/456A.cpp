#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second

int main(){
    int n;cin>>n;
    pair<int, int> arr[n];  // pair<price, quality>
    for(int i=0;i<n;++i)
    	cin>>arr[i].F>>arr[i].S;
    sort(arr,arr+n);
    
    bool flag=0;
    for(int i=1;i<n;++i)
    	if(arr[i-1].S>arr[i].S && arr[i-1].F != arr[i].F)
    		flag =1;
    if(flag)
    	cout<<"Happy";
    else
    	cout<<"Poor";
    cout<<" Alex\n";
}