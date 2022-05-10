#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	int arr[19];
	ll temp=1;
	for(int i=0;i<19;++i){
		arr[i]=temp;
		temp*=3;
	}
	while(t--){
		ll n;cin>>n;
		if(n>19)
			cout<<"NO";
		else{
			cout<<"YES\n";
			for(int i=0;i<n;++i)
				cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
}