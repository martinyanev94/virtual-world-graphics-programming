#include <chrono>

void loadCharacterWithTiming(const std::string& basePath) {
    auto start = std::chrono::high_resolution_clock::now();
    
    loadCharacter(basePath);
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> loadTime = end - start;
    std::cout << "Character loaded in: " << loadTime.count() << " ms" << std::endl;
}
