#pragma once

#include "Node.h"
#include <string>

class BrowserHistory {
private:
    Node* curr;
    Node* head;
    Node* tail;

public:
    BrowserHistory(std::string homepage);
    void visit(std::string url);
    std::string back(int steps);
    std::string forward(int steps);
};