struct ModelAndInstanceData {
    GLuint modelID; // Unique identifier for the model
    std::vector<GLuint> instanceIDs; // Unique identifiers for each instance of this model
    glm::mat4 transformationMatrix; // Transformation matrix for positioning, rotating, and scaling the model
    size_t instanceCount; // Current number of instances of the model

    ModelAndInstanceData(GLuint id) 
        : modelID(id), instanceCount(0), transformationMatrix(1.0f) {}
};
