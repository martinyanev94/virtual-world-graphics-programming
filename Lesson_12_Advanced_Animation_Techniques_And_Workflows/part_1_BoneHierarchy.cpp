struct Bone {
    glm::mat4 transformation; // The transformation matrix of the bone
    std::vector<Bone*> children; // Child bones for hierarchical structure

    Bone() : transformation(glm::mat4(1.0f)) {}
};
