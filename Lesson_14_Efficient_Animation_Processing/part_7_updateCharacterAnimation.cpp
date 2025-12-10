void updateCharacterAnimation(Character& character) {
    if (character.isMoving) {
        // Update and blend moving animations
        updateAnimationBlend(character.walkAnimation, character.runAnimation, deltaTime);
    } else {
        // Preserve resources, no need for complex updates
        character.currentAnimation = character.idleAnimation;
    }
}
