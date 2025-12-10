float additiveWeight = 1.0f; // Influence of the additive animation

void applyAdditiveAnimation(Character& character, float additiveWeight) {
    for (auto& bone : character.getBones()) {
        glm::mat4 additiveTransform = bone.getAdditiveTransform();

        // Base transform
        glm::mat4 baseTransform = getBaseTransform(bone);

        // We blend the base and the additive transform based on additiveWeight
        glm::mat4 finalTransform = glm::mix(baseTransform, baseTransform * additiveTransform, additiveWeight);

        bone.setTransform(finalTransform);
    }
}
