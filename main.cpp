#include <iostream>
#include "graph.h"

int main() {
    size_t verticesCount, edgesCount ;
    std::cin >> verticesCount >> edgesCount;
    MatrixGraph graph(verticesCount);
    size_t from, to;
    try {
        for (size_t i = 0; i < edgesCount; ++i) {
            std::cin >> from >> to;
            graph.AddEdge(from, to);
        }
        std::cout << hasCycle(&graph) << std::endl;
    } catch (...) {
        std::cout << "Error! Wrong vertices number" << std::endl;
    }
    return 0;
}
