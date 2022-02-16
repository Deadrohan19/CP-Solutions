#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int cnt=0;
		for(int i=0;i<n/2;++i)
			if(s[i]!=s[n-i-1])
				cnt++;
		bool flag=1;
		if(cnt>k)
			flag=0;
		else if(cnt<k && ((k-cnt)&1)){
			if(!(n&1))
				flag=0;
		}
		
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	
}