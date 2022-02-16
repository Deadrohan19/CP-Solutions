#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	string s;cin>>s;
	int i=0;
	while(s.substr(i,3)=="WUB")
		i+=3;
	
	while(i<s.length()){
		if(s.substr(i,3)=="WUB"){
			i+=3;
			while(s.substr(i,3)=="WUB" && i<s.length())
				i+=3;
			cout<<" ";
		}
		else{
			cout<<s[i];
			i++;
		}
	}
}