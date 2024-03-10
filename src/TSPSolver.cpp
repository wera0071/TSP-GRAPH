#include "TSPSolver.h"
#include <algorithm>

Tour TSPSolver::solve(const Graph& graph) {
    Tour currentTour;
    for (size_t i = 0; i < graph.size(); ++i) {
        currentTour.addVertex(i);
    }
    currentTour.calculateTotalDistance(graph);

    bool improvement = true;
    while (improvement) {
        improvement = false;
        for (size_t i = 0; i < graph.size() - 1; i++) {
            for (size_t j = i + 1; j < graph.size(); j++) {
                std::vector<int> newTour = currentTour.getVertexIndices();
                std::reverse(newTour.begin() + i + 1, newTour.begin() + j + 1); // Должно быть i+1 и j+1
                
                Tour potentialTour;
                potentialTour.setVertexIndices(newTour);
                potentialTour.calculateTotalDistance(graph);
                
                if (potentialTour.getTotalDistance() < currentTour.getTotalDistance()) {
                    currentTour = potentialTour;
                    improvement = true;
                }
            }
        }
    }

    return currentTour;
}

