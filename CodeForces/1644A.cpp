#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		vector<bool> flag(3,true);
		bool mark =true;
		for(int i=0;i<6;++i){
			if(s[i]=='r')
				flag[0]=false;
			else if(s[i]=='g')
				flag[1]=false;
			else if(s[i]=='b')
				flag[2]=false;
			else if(s[i]=='R' && flag[0]){
				mark = false;
				break;
			}
			else if(s[i]=='G' && flag[1]){
				mark = false;
				break;
			}
			else if(s[i]=='B' && flag[2]){
				mark = false;
				break;
			}
			
		}
		if(mark)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
}