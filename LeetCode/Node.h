#pragma once

#include <string>

struct Node {
public:
    std::string url;
    Node* next;
    Node* prev;

    Node() : url(), next(nullptr), prev(nullptr) {}
    Node(std::string u) : url(u), next(nullptr), prev(nullptr) {}
};