void applyAdditiveAnimation(glm::vec3& position, const glm::vec3& baseMovement, const glm::vec3& additiveMovement) {
    position += baseMovement + additiveMovement; // Combine both movements
}
