struct ModelAndInstanceData {
    unsigned int modelID;  // Unique identifier for the model
    glm::mat4* instanceMatrices; // Array of transformation matrices for the instances
    unsigned int instanceCount; // Total number of instances
    unsigned int maxInstances; // Max instances that can be held
    
    ModelAndInstanceData(unsigned int id, unsigned int maxInstances)
        : modelID(id), instanceCount(0), maxInstances(maxInstances) {
        instanceMatrices = new glm::mat4[maxInstances];
    }

    ~ModelAndInstanceData() {
        delete[] instanceMatrices; // Clean up dynamic memory
    }

    void addInstance(const glm::mat4& matrix) {
        if (instanceCount < maxInstances) {
            instanceMatrices[instanceCount] = matrix;
            instanceCount++;
        }
    }
};
