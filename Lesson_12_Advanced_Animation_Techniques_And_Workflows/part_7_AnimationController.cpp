struct AnimationController {
    AnimationState currentState; // Current state of the character's animation
    std::map<AnimationState, Animation> animations; // Collection of animations

    void Update(float deltaTime) {
        // Update the current animation based on state
        animations[currentState].Update(deltaTime);
    }

    void TransitionTo(AnimationState newState) {
        if (animations.find(newState) != animations.end()) {
            currentState = newState; // Change to the new animation state
        }
    }
};
