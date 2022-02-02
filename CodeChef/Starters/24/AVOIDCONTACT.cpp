#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	
	while(t--){
		int x,y;cin>>x>>y;
		if(x==y)
			cout<<y*2-1;
		else
			cout<<y*2+(x-y);
		cout<<"\n";
	}
}