#ifndef PARSER_H
#define PARSER_H

#include "Base.h" 
#include "Graph.h"
#include <string>
#include <fstream>
#include <sstream>

class Parser : public Base {
public:
    Parser() {}

    Graph parse(const std::string& filename);
};

#endif // PARSER_H

