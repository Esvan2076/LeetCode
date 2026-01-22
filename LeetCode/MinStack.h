#pragma once

#include <string>
#include <stack>
#include <algorithm>
#include <vector>

class MinStack {
private:
    std::stack<int> stk;
    std::stack<int> minStk;
public:
    MinStack();
    void push(int val);
    void pop();
    int top();
    int getMin();
};