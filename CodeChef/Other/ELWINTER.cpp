//PARTIAL correct

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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define INF LLONG_MAX
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//functions
int popcount(int x){return __builtin_popcount(x);}

vector<bool> frozen;
vector<vector<int>> graph;

void addEdge(int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void freez(int x, int t,int cnt){
	if(cnt==t) return;
	for(int i=0;i<graph[x].size();++i){
		if(frozen[graph[x][i]])
			continue;
		frozen[graph[x][i]]=true;
		freez(graph[x][i],t,cnt+1);
	}
}

void test_case(){
    int n,m,q;cin>>n>>m>>q;
    graph = vector<vector<int>>(n);
    frozen = vector<bool>(n,false);
    
    while(m--){
    	int u,v;cin>>u>>v;
    	addEdge(u-1,v-1);
    }
    while(q--){
    	int x,y;cin>>x>>y;
    	if(x==1){
    		frozen[y-1]=true;
    	}
    	else if(x==2){
    		vector<bool> temp = frozen;
    		for(int i=0;i<n;++i){
    			if(temp[i])
    				freez(i,y,0);
    		}
    	}
    	else{
    		if(frozen[y-1])
    			cout<<"YES";
    		else
    			cout<<"NO";
    		cout<<"\n";
    	}
    }
    
    // for(auto i: graph){
    // 	for(auto j: i)
    // 		cout<<j<<" ";
    // 	cout<<"\n";
    // }
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    // cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
