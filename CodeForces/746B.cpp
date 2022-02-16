#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	string s;cin>>s;
	
	for(int i=n-2;i>=0;i-=2)
			cout<<s[i];
		
	if(n&1){
		cout<<s[0];
		for(int i=2;i<n;i+=2)
			cout<<s[i];
	}
	else
		for(int i=1;i<n;i+=2)
			cout<<s[i];
}