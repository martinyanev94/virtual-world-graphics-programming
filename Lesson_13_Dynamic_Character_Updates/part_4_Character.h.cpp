struct Character {
    glm::vec3 position;
    glm::vec3 rotation;
    glm::vec3 scale;
    Animation currentAnimation;

    void update(float deltaTime) {
        // Update character's position and animation based on delta time
        position += velocity * deltaTime; // Simple movement update
        currentAnimation.update(deltaTime); // Update the current animation
    }

    void sendToGPU(GLuint shaderProgram) {
        // Send the position and rotation to the GPU
        glUniform3fv(glGetUniformLocation(shaderProgram, "uPosition"), 1, &position[0]);
        glUniform3fv(glGetUniformLocation(shaderProgram, "uRotation"), 1, &rotation[0]);
    }
};
