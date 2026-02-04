#include "BrowserHistory.h"

BrowserHistory::BrowserHistory(std::string homepage) {
    head = new Node();
    curr = new Node(homepage);
    head->next = curr;
    curr->prev = head;
    tail = curr;
}

void BrowserHistory::visit(std::string url) {
    Node* temp = new Node(url);
    curr->next = temp;
    temp->prev = curr;
    curr = temp;
    tail = curr;
}

std::string BrowserHistory::back(int steps) {
    Node* temp = curr;
    while (temp != head) {
        if (steps == 0) {
            curr = temp;
            return temp->url;
        }
        --steps;
        temp = temp->prev;
    }
    curr = temp->next;
    return temp->next->url;
}

std::string BrowserHistory::forward(int steps) {
    Node* temp = curr;
    while (temp != tail) {
        if (steps == 0) {
            curr = temp;
            return temp->url;
        }
        --steps;
        temp = temp->next;
    }
    curr = temp;
    return temp->url;
}