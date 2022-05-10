#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(n==3){
			cout<<"3 2 1\n";
			cout<<"1 3 2\n";
			cout<<"3 2 1\n";
			continue;
		}
		int x;
		if(n>24)
			x = 5;
		else if(n>6)
			x= 4;
		else if(n>2)
			x=3;
		else if(n>1)
			x=2;
		else
			x=1;
		vector<int> arr;
		for(int i=0;i<x;++i)
			arr.pb(n-i);
		sort(arr.begin(), arr.end());
		for(int i=0;i<n;++i){
			for(int j=0;j<x;++j)
				cout<<arr[j]<<" ";
			for(int j=n-x;j>0;--j)
				cout<<j<<" ";
			cout<<"\n";
			next_permutation(arr.begin(),arr.end());
		}
	}
}