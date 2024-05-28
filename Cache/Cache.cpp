#include "Cache.h"

Cache::Cache(int capacity) {
    storage.updateCapacity(capacity);
}

int Cache::get(int key) {
    int value = storage.retrive(key);
    if (value != -1) evictPolicy.keyAccessed(key);
    return value;
}

void Cache::set(int key, int value) {
    if (storage.isStorageFull()) {
        int evictionKey = evictPolicy.eviction();
        storage.remove(evictionKey);
    }

    storage.store(key, value);
    evictPolicy.keyAccessed(key);
}