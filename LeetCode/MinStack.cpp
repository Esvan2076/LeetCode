#include "MinStack.h"

MinStack::MinStack() {}

void MinStack::push(int val) {
    stk.push(val);
    if (minStk.empty()) {
        minStk.push(val);
    }
    else {
        minStk.push(std::min(val, minStk.top()));
    }
}

void MinStack::pop() {
    stk.pop();
    minStk.pop();
}

int MinStack::top() {
    return stk.top();
}

int MinStack::getMin() {
    return minStk.top();
}