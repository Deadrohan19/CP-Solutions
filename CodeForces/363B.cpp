#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int n,k;cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	int sum=0;
	for(int i=0;i<k;++i)
		sum+=arr[i];
	int min_sum=sum,ans=1;
	
	for(int i=k;i<n;++i){
		int j=i-k;
		sum+=arr[i];
		sum-=arr[j];
		if(sum<min_sum)
			min_sum=sum,ans=j+2;
	}
	cout<<ans;
}