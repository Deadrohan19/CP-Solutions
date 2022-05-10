/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define mp make_pair
#define all(x) begin(x),end(x)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define INF (int)1e9
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    ll n;cin>>n;
    ll arr[n],s_arr[n];
    for(int i=0;i<n;++i){
    	cin>>arr[i];
    	s_arr[i]=arr[i];
    }
    string s;cin>>s;
    sort(s_arr,s_arr+n);
    bool flag1 = true,flag2=false;
    pair<int, int> p[2];
    
    for(int i=1;i<n;++i)
    	if(s[0]!=s[i]){
    		flag1 = false;
    		if(s[0]=='N')
    			p[0]={0,i};
    		else
    			p[0]={i,0};
    		break;
    	}
    int st,end;
    for(int i=0;i<n;++i)
    	if(arr[i]!=s_arr[i]){
    		flag2=true;
    		st = i;
    		break;
    	}
    if(!flag2)
    	cout<<0;
    else if(flag1 && flag2)
    	cout<<-1;
    else{
    	for(int i=n-2;i>=0;i--)
    		if(s[n-1]!=s[i]){
    			if(s[n-1]=='N')
    				p[1]={n-1,i};
    			else
    				p[1]={i,n-1};
    			break;
    		}
    	bool flag = false;
    	for(int i=n-1;i>=0;--i){
	    	if(arr[i]!=s_arr[i]){
	    		end=i;
	    		break;
	    	}
		}
		if((p[0].F<=st && p[1].S>=end) || (p[0].S<=st && p[1].F>=end))
			flag = true;
		if(flag)
			cout<<1;
		else
			cout<<2;
    }
    cout<<"\n";	
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
