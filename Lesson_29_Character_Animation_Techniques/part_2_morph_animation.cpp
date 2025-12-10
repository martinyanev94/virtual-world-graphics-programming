struct MorphTarget {
    std::vector<glm::vec3> vertices; // The vertex positions for this target
};

std::vector<MorphTarget> morphTargets; // List of morph targets
std::vector<float> weights; // Weights for blending

void applyMorphAnimation(std::vector<glm::vec3>& baseVertices) {
    for (size_t i = 0; i < baseVertices.size(); ++i) {
        glm::vec3 morphedVertex = baseVertices[i];

        for (size_t j = 0; j < morphTargets.size(); ++j) {
            morphedVertex += (morphTargets[j].vertices[i] - baseVertices[i]) * weights[j];
        }

        baseVertices[i] = morphedVertex; // Update the base vertices with the morphed positions
    }
}
