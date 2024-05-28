#include "DoublyLinkedList.h"
#include <iostream>

Node::Node(int value) {
    data = value;
    prev = nullptr;
    next = nullptr;
}

DoublyLinkedList::DoublyLinkedList(): head(nullptr), tail(nullptr) {}

Node* DoublyLinkedList::getHead() { return head; }
Node* DoublyLinkedList::getTail() { return tail; }

void DoublyLinkedList::insertAtHead(int data) {
    Node* node = new Node(data);
    node->next = head;
    if (head != nullptr) head->prev = node;
    if (tail == nullptr) tail = node;
    head = node;
}

void DoublyLinkedList::remove(Node* node) {
    if (!node) return;
    Node* prevNode = node->prev;
    Node* nextNode = node->next;
    if (prevNode) prevNode->next = nextNode;
    if (nextNode) nextNode->prev = prevNode;
    if (!prevNode) head = nextNode;
    if (!nextNode) tail = prevNode;
    std::free(node);
}

DoublyLinkedList::~DoublyLinkedList() {
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        std::free(temp);
    }
}
