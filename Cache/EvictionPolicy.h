#include <unordered_map>
#include "DoublyLinkedList.h"
#ifndef _EVICTION_POLICY_
#define _EVICTION_POLICY_

class EvictionPolicy {
    DoublyLinkedList DLL;
    std::unordered_map<int, Node*> mapper;
    public:
        EvictionPolicy();
        void keyAccessed(int key);
        int eviction();
};


#endif