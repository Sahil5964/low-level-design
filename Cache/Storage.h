#include <unordered_map>
#ifndef _STORAGE_
#define _STORAGE_

class Storage {
    int capacity;
    std::unordered_map<int, int> storage;
    public:
        Storage();
        void updateCapacity(int capacity);
        void store(int key, int value);
        int retrive(int key);
        void remove(int key);
        bool isStorageFull();
};


#endif