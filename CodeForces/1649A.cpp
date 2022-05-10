#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(auto &i:arr)cin>>i;
		int first=-1,last=-1;
		
		for(int i=0;i<n-1;++i)
			if(arr[i+1]==0){
				first = i;
				break;
			}
		for(int i=n-1;i>0;--i)
			if(arr[i-1]==0){
				last=i;
				break;
			}
		if(first==-1)
			cout<<0;
		else
			cout<<last-first;
		cout<<"\n";
	}
}