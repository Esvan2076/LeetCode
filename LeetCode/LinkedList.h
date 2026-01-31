#pragma once

#include "ListNode.h"

class LinkedList {
public:

    ListNode* head;
    ListNode* tail;
    int size;
    LinkedList();

    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
};