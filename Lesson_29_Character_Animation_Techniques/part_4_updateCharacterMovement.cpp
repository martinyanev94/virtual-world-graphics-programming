void updateCharacter(float deltaTime) {
    glm::vec3 position = character.getPosition();
    glm::vec3 baseMovement = calculateBaseMovement(deltaTime); // Function to calculate base movement
    glm::vec3 additiveMovement = calculateAdditiveMovement(deltaTime); // Function for additional animations

    applyAdditiveAnimation(position, baseMovement, additiveMovement); // Apply both movements
    character.setPosition(position); // Update character position in the scene
    calculateBoneTransformations(rootBoneIndex, glm::mat4(1.0f)); // Recalculate bone transformations    
}
