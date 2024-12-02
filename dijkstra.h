//
// Created by hanes on 12/1/2024.
//

#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>
#include <queue>
#include <limits>
#include <stdexcept>

class Dijkstra {
public:
    static constexpr int INF = std::numeric_limits<int>::max();

    static std::vector<int> dijkstra(int n, int source, const std::vector<std::vector<std::pair<int, int>>>& graph) {
        if (source < 0 || source >= n) {
            throw std::invalid_argument("Invalid source node.");
        }

        std::vector<int> distances(n, INF);
        distances[source] = 0;

        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;
        pq.push({0, source});

        while (!pq.empty()) {
            int current_distance = pq.top().first;
            int current_node = pq.top().second;
            pq.pop();

            if (current_distance > distances[current_node]) continue;

            for (const auto& neighbor : graph[current_node]) {
                int neighbor_node = neighbor.first;
                int edge_weight = neighbor.second;

                if (current_distance + edge_weight < distances[neighbor_node]) {
                    distances[neighbor_node] = current_distance + edge_weight;
                    pq.push({distances[neighbor_node], neighbor_node});
                }
            }
        }
        return distances;
    }
};

#endif //DIJKSTRA_H
