#include "Storage.h"

Storage::Storage(): capacity(0) {}

void Storage::updateCapacity(int capacity) {
    this->capacity = capacity; 
}

void Storage::store(int key, int value) { 
    storage[key] = value; 
}

int Storage::retrive(int key) { 
    int value = -1; 
    if (storage.find(key) != storage.end())
        value = storage[key];
    return value;
}

void Storage::remove(int key) { 
    storage.erase(storage.find(key)); 
}

bool Storage::isStorageFull() { 
    return capacity <= storage.size(); 
}
