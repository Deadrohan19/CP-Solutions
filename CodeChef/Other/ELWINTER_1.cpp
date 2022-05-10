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

vector<vector<int>> graph;
vector<bool> vis;

void addEdge(int u, int v){
	graph[u].pb(v);
	graph[v].pb(u);
}

void test_case(){
    int N,M,Q;cin>>N>>M>>Q;
    vis = vector<bool>(N,false);
    graph = vector<vector<int>>(N);
    queue<int> q;
    
    while(M--){
    	int u,v;cin>>u>>v;
    	addEdge(u-1,v-1);
    }
    
    while(Q--){
    	int type,x;cin>>type>>x;
    		
    	if(type==1){
    		x--;
    		if(!vis[x]){
    			vis[x]=true;
    			q.push(x);
    		}
    	}
    	else if(type==2){
    		while(!q.empty() && x--){
    			int sz = q.size();
    			for(int i=0;i<sz;++i){
    				int y = q.front();
    				q.pop();
    				for(auto child: graph[y]){
    					if(!vis[child]){
    						vis[child] =true;
    						q.push(child);
    					}
    				}
    				
    			}
    		}
    	}
    	else{
    		x--;
    		if(vis[x])
    			cout<<"YES";
    		else
    			cout<<"NO";
    		cout<<"\n";
    	}
    }
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
