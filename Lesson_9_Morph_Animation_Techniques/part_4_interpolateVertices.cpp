std::vector<glm::vec3> interpolate(const std::vector<glm::vec3>& startVertices,
                                    const std::vector<glm::vec3>& endVertices,
                                    float t) {
    std::vector<glm::vec3> result;
    for (size_t i = 0; i < startVertices.size(); i++) {
        glm::vec3 interpolatedVertex = (1 - t) * startVertices[i] + t * endVertices[i % endVertices.size()];
        result.push_back(interpolatedVertex);
    }
    return result;
}
