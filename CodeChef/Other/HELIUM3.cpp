#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int a,b,x,y;cin>>a>>b>>x>>y;
		if((a*b)>(x*y))
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";
	}
}