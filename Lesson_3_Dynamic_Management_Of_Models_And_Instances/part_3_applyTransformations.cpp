void applyTransformations(GLuint modelID, const std::vector<glm::mat4>& transforms) {
    if (models.find(modelID) != models.end()) {
        auto& modelData = models[modelID];
        for (size_t i = 0; i < transforms.size() && i < modelData.instanceCount; i++) {
            modelData.transformationMatrix = transforms[i];
        }
    }
}
