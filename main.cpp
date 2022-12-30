#include <unordered_map>
#include <cstring>
#include <iostream>

template <typename T>
class Cache {
 public:
  // Insert a value into the cache
  void Put(const std::string& key, const T& value) {
    cache_[key] = value;
  }

  // Retrieve a value from the cache
  bool Get(const std::string& key, T* value) {
    auto it = cache_.find(key);
    if (it == cache_.end()) {
      return false;
    }
    *value = it->second;
    return true;
  }

  // Remove a value from the cache
  void Remove(const std::string& key) {
    cache_.erase(key);
  }

 private:
  std::unordered_map<std::string, T> cache_;
};

int main() {
  Cache<int> cache;
  cache.Put("key", 123);
  int value;
  if (cache.Get("key", &value)) {
    std::cout << "Retrieved value: " << value << std::endl;
  }
  cache.Remove("key");
  if (!cache.Get("key", &value)) {
    std::cout << "Value was removed from the cache" << std::endl;
  }
  return 0;
}
