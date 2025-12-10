void processInputAndUpdate(Character& character, Input& input) {
    if (input.isMovingForward) {
        character.skeleton->setAnimation("walk");
    }
    
    if (input.isLookingUp) {
        float blendFactor = 0.5f; // Blend value for facial up expression
        updateCharacterAnimation(character, character.walkCycleTime, blendFactor);
    }

    AdditiveAnimation armSwingAnimation;
    armSwingAnimation.positionOffset = glm::vec3(0.1f, 0, 0); // Small forward movement
    armSwingAnimation.apply(character);
}
