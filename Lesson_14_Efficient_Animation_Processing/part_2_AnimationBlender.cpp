struct Animation {
    GLuint id; // Animation ID
    float weight; // Weight for blending

    Animation(GLuint animationId, float blendWeight)
        : id(animationId), weight(blendWeight) {}
};

void blendAnimations(Animation& base, Animation& additive) {
    float blendedWeight = base.weight + additive.weight;
    if (blendedWeight > 1.0f) {
        blendedWeight = 1.0f; // Clamp to ensure valid weight
    }
    // Use blendedWeight to mix between base and additive animations
    // Update character's animation state with blended data
}
