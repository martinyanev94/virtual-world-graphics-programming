struct ModelAndInstanceData {
    GLuint modelVAO;         // Vertex Array Object for the model
    GLuint textureID;        // Texture ID for model's texture
    glm::vec3 position;      // Position of the model instance
    glm::vec3 rotation;      // Rotation of the model instance
    glm::vec3 scale;         // Scale of the model instance
    int instanceCount;       // Number of instances for this model

    // Constructor to initialize the model data
    ModelAndInstanceData(GLuint vao, GLuint texID, glm::vec3 pos, glm::vec3 rot, glm::vec3 scl)
        : modelVAO(vao), textureID(texID), position(pos), rotation(rot), scale(scl), instanceCount(0) {}
};
