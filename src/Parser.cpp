#include "Parser.h"

Graph Parser::parse(const std::string& filename) {
    std::ifstream file(filename);
    Graph graph;
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    int verticesCount;
    file >> verticesCount; // Считываем количество вершин

    for (int i = 0; i < verticesCount; ++i) {
        double x, y;
        if (!(file >> x >> y)) {
            throw std::runtime_error("Error reading vertex coordinates");
        }
        graph.addVertex(Point(x, y));
    }

    return graph;
}

