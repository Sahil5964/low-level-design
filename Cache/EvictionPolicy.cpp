#include "EvictionPolicy.h"

EvictionPolicy::EvictionPolicy() {
    mapper.clear();
}

void EvictionPolicy::keyAccessed(int key) {
    if (mapper.find(key) != mapper.end())
        DLL.remove(mapper[key]);
    DLL.insertAtHead(key);
    mapper[key] = DLL.getHead();
}

int EvictionPolicy::eviction() {
    int key = DLL.getTail()->data;
    mapper.erase(mapper.find(key));
    DLL.remove(DLL.getTail());
    return key;
}

