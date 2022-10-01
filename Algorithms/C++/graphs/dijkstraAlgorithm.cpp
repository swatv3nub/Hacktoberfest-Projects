#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<int> &dist, vector<pair<int,int>> graph[], int n){
    set<pair<int,int>> bag;
    fill(dist.begin(), dist.end(), INT_MAX);
    dist[1] = 0;
    bag.insert({0,1});
    while(!bag.empty()){
        auto curr = *(bag.begin());
        int node = curr.second;
        int d = curr.first;
        bag.erase(curr);
        for(auto child: graph[node]){
            if(d+child.second < dist[child.first]){
                bag.erase({dist[child.first],child.first});
                bag.insert({d+child.second, child.first});
                dist[child.first] = d+child.second;
            }
        }
    }
}

int main(){
    int n,m; cin>>n>>m;
    vector<pair<int,int>> graph[n+1];
    for(int i = 0; i < m; i++){
        int x, y, w;
        cin>>x>>y>>w;
        graph[x].push_back({y,w});
        graph[y].push_back({x,w});
    }
    vector<int> dist(n+1);
    dijkstra(dist, graph, n);
    for(int i = 1; i <= n; i++) cout<<i<<":"<<dist[i]<<" ";
    return 0;
}