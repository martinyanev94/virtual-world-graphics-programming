void updateCharacterAnimation(Character& character, float deltaTime) {
    // This function updates the character's animation based on deltaTime.

    // Update the base animation
    character.updateBaseAnimation(deltaTime);

    // Then apply the additive animation
    applyAdditiveAnimation(character);
}

void applyAdditiveAnimation(Character& character) {
    // Here we’ll apply our additive animations. 
    // Assume character has a bone structure where each bone can have its own animation.

    for (auto& bone : character.getBones()) {
        // Get the current additive transformation for this bone
        glm::mat4 additiveTransform = bone.getAdditiveTransform();

        // Combine the base transform and the additive transform
        glm::mat4 finalTransform = getBaseTransform(bone) * additiveTransform;

        // Update the bone's transformation matrix
        bone.setTransform(finalTransform);
    }
}
