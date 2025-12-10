void logMemoryUsage(const ResourceManager& resourceManager) {
    size_t totalMemory = 0;
    for (const auto& model : resourceManager.models) {
        // Here, we'll estimate memory taken by the model components
        // Assume getModelMemorySize is a function to get memory size
        totalMemory += getModelMemorySize(model.second);
    }
    std::cout << "Total Memory Usage: " << totalMemory << " bytes" << std::endl;
}

// Example usage
logMemoryUsage(resourceManager);
