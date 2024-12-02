//
// Created by hanes on 12/1/2024.
//

#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <set>
#include <limits>

using namespace std;

void displayGraph(const unordered_map<int, vector<int>>& graph) {
    cout << "GRAPH:" <<endl;
    for (const auto& pair : graph) {
        cout << pair.first << ": ";
        for (int neighbor : pair.second) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

// BFS
void bfsInteractive(const unordered_map<int, vector<int>>& graph, int start) {
    queue<int> q;
    set<int> visited;

    cout << "STARTING BFS FROM NODE " << start << endl;

    q.push(start);
    visited.insert(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        cout << "PROCESSING NODE: " << current << endl;

        cout << "QUEUE STATUS: ";
        queue<int> tempQueue = q;
        while (!tempQueue.empty()) {
            cout << tempQueue.front() <<endl;
            tempQueue.pop();
        }
        cout << endl;

        for (int neighbor : graph.at(current)) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);

                cout << "DISCOVERED NODE: " << neighbor << " (ADDED TO QUEUE)" << endl;
            }
        }

        cout << "PRESS ENTER TO CONTINUE...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "BFS COMPLETED!!! :) " << endl;
}

#endif //BFS_H
