#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[k];
		for(int i=0;i<k;++i)
			cin>>arr[i];
		sort(arr,arr+k);
		int x = 1;
		for(int i=0;i<k;++i){
			int j;
			for(j=x+1;j<=arr[i];++j)
				cout<<j<<" ";
			cout<<x<<" ";
			x =j;
		}
		cout<<"\n";
	}
}