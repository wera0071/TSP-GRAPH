#ifndef TSPSOLVER_H
#define TSPSOLVER_H

#include "Base.h" 
#include "Graph.h"
#include "Tour.h"

class TSPSolver : public Base {
public:
    TSPSolver() {}

    Tour solve(const Graph& graph); 
};

#endif // TSPSOLVER_H 

