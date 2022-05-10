#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		int arr[3];
		for(int i=0;i<3;++i)
			cin>>arr[i];
		sort(arr,arr+3);
		cout<<(x-1)*arr[0] + arr[1]<<"\n";
		
	}
}