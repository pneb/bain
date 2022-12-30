# bain

C++ library for caching and improving performance in a Windows environment

## Operational Usage

```cpp
#include <iostream>
#include "cache.h"

int main() {
  Cache<int> cache;
  cache.Put("key", 123);
  int value;
  if (cache.Get("key", &value)) {
    std::cout << "Retrieved value: " << value << std::endl;
  }
  return 0;
}
```
