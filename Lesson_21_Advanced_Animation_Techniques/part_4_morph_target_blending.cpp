struct MorphTarget {
    std::string name;
    std::vector<glm::vec3> vertices; // Vertex positions for this morph target

    MorphTarget(std::string targetName, const std::vector<glm::vec3>& targetVertices)
        : name(targetName), vertices(targetVertices) {}
};
std::vector<glm::vec3> blendMorph(const std::vector<glm::vec3>& baseVertices, const MorphTarget& target, float factor) {
    std::vector<glm::vec3> newVertices;
    for (size_t i = 0; i < baseVertices.size(); ++i) {
        glm::vec3 blendedVertex = glm::mix(baseVertices[i], target.vertices[i], factor);
        newVertices.push_back(blendedVertex);
    }
    return newVertices;
}
