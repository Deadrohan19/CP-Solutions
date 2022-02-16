#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int flag =1;
		
		for(int i=0;i<n/2;++i)  //palindrom check 
			if(s[i]!=s[n-1-i])
				flag=0;
		
		if(k==0 || flag)
			cout<<1;
		else
			cout<<2;
		cout<<"\n";
	}
}