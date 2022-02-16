#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		double n;cin>>n;
		int x =n;
		n *= 0.143;
		n = pow(n,x);
		cout<<(int)(n+0.5)<<"\n";
	}
}