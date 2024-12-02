//
// Created by hanes on 12/1/2024.
//

#ifndef DFS_H
#define DFS_H
using namespace std;

class DFSstruct {
    public:
    void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s){

        visited[s] = true;

        cout << s << " ";

        for (int i : adj[s])
            if (visited[i] == false)
                DFSRec(adj, visited, i);
    }

    void DFS(vector<vector<int>> &adj, int s){
        vector<bool> visited(adj.size(), false);
        DFSRec(adj, visited, s);
    }

    void addEdge(vector<vector<int>> &adj, int s, int t){
        adj[s].push_back(t);
        adj[t].push_back(s);
    }

};
#endif //DFS_H
