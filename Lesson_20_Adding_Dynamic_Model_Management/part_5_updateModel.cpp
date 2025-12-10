void updateModel(ModelAndInstanceData& modelData, const glm::vec3& newPosition, 
                             const glm::vec3& newRotation, const glm::vec3& newScale) {
    modelData.position = newPosition;
    modelData.rotation = newRotation;
    modelData.scale = newScale;
}
