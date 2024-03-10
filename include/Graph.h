#ifndef GRAPH_H
#define GRAPH_H

#include "Point.h"
#include <vector>
#include <cmath>

class Graph {
private:
    std::vector<Point> vertices;

public:
    Graph() {}

    void addVertex(const Point& point) {
        vertices.push_back(point);
    }

    // Удалите 'Graph::' из объявления метода
    double distance(int i, int j) const {
        const Point& p1 = vertices.at(i); // используйте at для защиты от выхода за границы
        const Point& p2 = vertices.at(j); // аналогично здесь
        return std::hypot(p1.x - p2.x, p1.y - p2.y);
    }

    size_t size() const {
        return vertices.size();
    }

    const Point& getVertex(int i) const {
        return vertices[i];
    }

    // Дополнительные методы по необходимости
};

#endif // GRAPH_H

