#include "Parser.h"
#include "TSPSolver.h"
#include <iostream>

int main(int argc, char *argv[]) {
    // Убедитесь, что аргументы командной строки предоставлены
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    // Создание парсера и чтение графа из файла
    Parser parser;
    Graph graph = parser.parse(argv[1]);

    // Проверка, что граф содержит вершины
    if (graph.size() == 0) {
        std::cerr << "No vertices in graph." << std::endl;
        return 1;
    }

    // Создание решателя задачи коммивояжера и решение задачи
    TSPSolver solver;
    Tour bestTour = solver.solve(graph);

    // Вывод результата
    std::cout << "Total distance: " << bestTour.getTotalDistance() << std::endl;
    std::cout << "Tour: ";
    for (int index : bestTour.getVertexIndices()) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}

