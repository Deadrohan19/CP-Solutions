#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	int cnt0=0,cnt1=0;
	bool flag=0;
	for(auto i : s){
		if(i=='0')
			cnt0++,cnt1=0;
		else
			cnt1++,cnt0=0;
		if(cnt1==7 || cnt0==7){
			flag=1;break;
		}
	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
}