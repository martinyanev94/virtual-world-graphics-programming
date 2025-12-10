struct BlendSpace {
    std::vector<AnimationClip> clips;
    glm::vec2 position; // Represents the blend space position

    AnimationClip getBlendedAnimation() {
        // Determine which two clips to blend based on position
        AnimationClip clipA = clips[0]; // Assume we retrieve based on some indexing logic
        AnimationClip clipB = clips[1];

        // Calculate alpha based on the position within the blend space
        float alpha = position.x; // Simplistic approach; extend as necessary for more dimensions
        return blendAnimationClips(clipA, clipB, alpha);
    }
};
