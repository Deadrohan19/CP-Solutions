#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int n,k;cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	
	int x = arr[k-1];
	int ans=0;
	if(x==0){
		while(arr[ans]!=0)
			ans++;
	}
	else{
		ans=k;
		while(arr[ans]==x)
			ans++;
	}
	
	cout<<ans;
}