#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(n%3==0){
			for(int i=0;i<n/3;++i)
				cout<<"21";
		}
		else if(n%3==1){
			cout<<"1";
			for(int i=0;i<n/3;++i)
				cout<<"21";
		}
		else{
			for(int i=0;i<n/3;++i)
				cout<<"21";
			cout<<"2";
		}
		cout<<"\n";
	}
}