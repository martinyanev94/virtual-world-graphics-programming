#include <unordered_map>

class ModelCache {
    std::unordered_map<std::string, Model> cache;

public:
    Model& getModel(const std::string& modelPath) {
        if (cache.find(modelPath) == cache.end()) {
            Model model;
            model.load(modelPath);
            cache[modelPath] = model;
        }
        return cache[modelPath];
    }
};
