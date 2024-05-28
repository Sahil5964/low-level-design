#include <iostream>
#include <assert.h>
#include "Cache.h"

using namespace std;

int main()
{
    Cache cache(3);
    cache.set(1, 10);
    cache.set(3, 30);
    cache.set(5, 50);
    assert(cache.get(5) == 50);
    cache.set(4, 40);
    cache.set(6, 60);
    assert(cache.get(1) == -1);
    assert(cache.get(2) == -1);
    assert(cache.get(3) == -1);
    assert(cache.get(4) == 40);
    return 0;
}