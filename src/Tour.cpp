// Tour.cpp
#include "Tour.h"

void Tour::calculateTotalDistance(const Graph& graph) {
    totalDistance = 0.0;
    for (size_t i = 0; i < vertexIndices.size() - 1; ++i) {
        totalDistance += graph.distance(vertexIndices[i], vertexIndices[i + 1]);
    }
    // Замыкание тура должно быть внутри проверки на пустоту
    if (!vertexIndices.empty()) {
        totalDistance += graph.distance(vertexIndices.back(), vertexIndices.front());
    }
}
