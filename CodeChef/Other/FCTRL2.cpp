#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back

void mul(vector<int> &num, int n){
	int carry=0;
	for(int i=0;i<num.size();++i){
		int temp = num[i]*n+carry;
		num[i]=temp%10;
		carry = temp/10;
	}
	while(carry!=0){
		num.pb(carry%10);
		carry/=10;
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		vector<int> num;
		int n;cin>>n;
		for(int i=n;i>0;i/=10)
			num.pb(i%10);
		
		for(int i=2;i<n;++i){
			mul(num,i);
		}
		
		for(int i=num.size()-1;i>=0;--i)
			cout<<num[i];
		cout<<"\n";
	}
	
}