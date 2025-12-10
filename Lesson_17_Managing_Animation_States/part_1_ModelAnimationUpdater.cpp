struct ModelAndInstanceData {
    unsigned int modelId;
    std::vector<AnimationState> animationStates;

    // Function to update the current animation based on state
    void updateAnimationState(float deltaTime) {
        for (auto& state : animationStates) {
            if (state.isActive) {
                state.update(deltaTime);
                break; // Only update the active state
            }
        }
    }
};
