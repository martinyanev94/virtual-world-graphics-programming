void blendAnimations(const std::vector<Animation>& animations, float blendFactor) {
    for (size_t i = 0; i < animations.size(); ++i) {
        // Blend logic based on the blend factor
        applyAnimation(animations[i], blendFactor);
    }
}
