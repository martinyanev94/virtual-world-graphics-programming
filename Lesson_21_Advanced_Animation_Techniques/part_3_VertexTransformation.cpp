struct Vertex {
    glm::vec3 position;
    std::vector<std::pair<int, float>> boneWeights; // Pair of bone index and weight

    glm::vec3 applyTransform(const std::vector<Bone>& bones) {
        glm::vec3 newPosition = position;
        for (const auto& weight : boneWeights) {
            int boneIndex = weight.first;
            float boneWeight = weight.second;
            newPosition += boneWeight * (bones[boneIndex].position);
        }
        return newPosition;
    }
};
