#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,w;cin>>n>>w;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		sort(arr,arr+n);
		int sum=0,i;
		for(i=n-1;i>=0;i--){
			sum += arr[i];
			if(sum>=w)
				break;
		}
		cout<<i<<"\n";
	}
}