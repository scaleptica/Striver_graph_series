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
    int adj[n+1][m+1];
    while(m--){
        cin>>node1>>node2;
        adj[node1][node2] = 1;
        adj[node2][node1] = 1;
    }
    return 0;
}
