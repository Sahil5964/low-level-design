#include "Storage.h"
#include "EvictionPolicy.h"
#ifndef _CACHE_H_
#define _CACHE_H_

class Cache {
    Storage storage;
    EvictionPolicy evictPolicy;

    public:
        Cache(int capacity);
        int get(int key);
        void set(int key, int value);
};

#endif