ModelAndInstanceData createModel(const std::string& modelFile, const std::string& textureFile) {
    GLuint vao = loadModel(modelFile);
    GLuint texID = loadTexture(textureFile);
    glm::vec3 position(0.0f, 0.0f, 0.0f);  // Default position
    glm::vec3 rotation(0.0f, 0.0f, 0.0f);  // Default rotation
    glm::vec3 scale(1.0f, 1.0f, 1.0f);     // Default scale

    return ModelAndInstanceData(vao, texID, position, rotation, scale);
}
