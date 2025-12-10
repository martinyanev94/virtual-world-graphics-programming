void update(float deltaTime) {
    // Suppose we have a character that represents our player
    Character* player = getPlayerCharacter();

    // Retrieve input state, speed, etc.
    float speed = player->getSpeed();
    
    // Map speed to blend space for animations
    blendSpace.position.x = glm::clamp(speed / maxSpeed, 0.0f, 1.0f);
    
    // Update animations based on blended results
    AnimationClip currentAnimation = blendSpace.getBlendedAnimation();
    player->playAnimation(currentAnimation);
}
