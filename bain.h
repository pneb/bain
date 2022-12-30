#ifndef BAIN_H
#define BAIN_H

#include <unordered_map>
#include <cstring>

template <typename T>
class Cache {
 public:
  // Insert a value into the cache
  void Put(const std::string& key, const T& value);

  // Retrieve a value from the cache
  bool Get(const std::string& key, T* value);

  // Remove a value from the cache
  void Remove(const std::string& key);
};

#endif
