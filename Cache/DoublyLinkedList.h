#ifndef _DOUBLY_LINKED_LIST_
#define _DOUBLY_LINKED_LIST_
#include <iostream>

struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int value);
};

class DoublyLinkedList {
    Node *head, *tail;
    public:
        DoublyLinkedList();
        Node* getHead();
        Node* getTail();
        void insertAtHead(int data);
        void remove(Node* node);
        ~DoublyLinkedList();
};


#endif