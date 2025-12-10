struct MorphTarget {
    std::string name; // Name of the morph target
    std::vector<glm::vec3> vertexOffsets; // Offsets for each vertex

    MorphTarget(const std::string& targetName, const std::vector<glm::vec3>& offsets)
        : name(targetName), vertexOffsets(offsets) {}
};
