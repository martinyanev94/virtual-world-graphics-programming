struct Bone {
    glm::vec3 position;
    glm::vec3 rotation;
    std::vector<Bone*> children;

    void rotate(float angle, glm::vec3 axis) {
        // Code to apply rotation transformation
        rotation += glm::angleAxis(angle, axis);
    }

    void translate(glm::vec3 translation) {
        position += translation;
    }
};
