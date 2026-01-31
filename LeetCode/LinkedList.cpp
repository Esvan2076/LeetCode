#include "LinkedList.h"

LinkedList::LinkedList() {
    head = new ListNode();
    tail = head;
    size = 0;
}

int LinkedList::get(int index) {
    ListNode* temp = head->next;
    while (temp) {
        if (index == 0) return temp->val;
        --index;
        temp = temp->next;
    }
    return -1;
}

void LinkedList::addAtHead(int val) {
    ListNode* node = new ListNode(val);
    ++size;

    if (head->next == nullptr) {
        head->next = node;
        tail = node;
        return;
    }

    ListNode* next = head->next;
    head->next = node;
    node->next = next;
}

void LinkedList::addAtTail(int val) {
    ListNode* node = new ListNode(val);
    tail->next = node;
    tail = node;
    ++size;
}

void LinkedList::addAtIndex(int index, int val) {
    ListNode* temp = head;

    ListNode* node = new ListNode(val);
    while (temp) {
        if (index == 0) {
            ListNode* next = temp->next;
            temp->next = node;
            node->next = next;
            if (next == nullptr) tail = node;
            ++size;
            return;
        }
        temp = temp->next;
        --index;
    }
}

void LinkedList::deleteAtIndex(int index) {
    if (index >= size) return;
    ListNode* temp = head;

    while (temp) {
        if (index == 0) {
            ListNode* next = temp->next->next;
            temp->next = next;
            if (next == nullptr) tail = temp;
            --size;
            return;
        }
        temp = temp->next;
        --index;
    }
}