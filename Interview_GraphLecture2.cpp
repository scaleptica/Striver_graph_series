//Matrix=>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int adj[n+1][m+1];
    while(m--){
        cin>>node1>>node2;
        adj[node1][node2] = 1;
        adj[node2][node1] = 1;
    }
    return 0;
}


//List=>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0; i<m;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}

//in case of directed graph, the adjacency list will look something like=>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0; i<m;i++){
        int u, v;
        //Given=> u--->v
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    return 0;
}
