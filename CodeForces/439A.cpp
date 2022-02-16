#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n,d;cin>>n>>d;
	int sum=0;
	for(int i=0;i<n;++i){
		int x;cin>>x;
		sum+=x;
	}
	sum +=(n-1)*10;
	if(sum>d)
		cout<<-1;
	else{
		cout<<(d-sum)/5 + n*2 -2;
	}
}