// Tour.h
#ifndef TOUR_H
#define TOUR_H

#include "Graph.h"
#include <vector>

class Tour {
private:
    std::vector<int> vertexIndices; // Индексы вершин, представляющие тур
    double totalDistance; // Общая длина тура

public:
    Tour() : totalDistance(0) {}

    void addVertex(int index) {
        vertexIndices.push_back(index);
    }

    void calculateTotalDistance(const Graph& graph);

    void setVertexIndices(const std::vector<int>& indices) {
        vertexIndices = indices;
    }

    void setTotalDistance(double distance) {
        totalDistance = distance;
    }

    double getTotalDistance() const {
        return totalDistance;
    }

    const std::vector<int>& getVertexIndices() const {
        return vertexIndices;
    }

    // ... Другие методы и члены класса ...
};

#endif // TOUR_H

