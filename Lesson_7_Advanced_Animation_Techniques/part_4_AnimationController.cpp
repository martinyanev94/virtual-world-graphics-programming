class AnimationController {
public:
    Animation currentAnimation;
    std::vector<Animation> additiveAnimations;

    void update(float deltaTime) {
        currentAnimation.update(deltaTime);
        for (auto& additive : additiveAnimations) {
            additive.update(deltaTime);
        }
        blendAnimations();
    }

private:
    void blendAnimations() {
        // Logic to combine current and additive animations
        // This could involve weightings based on character state
        for (size_t i = 0; i < currentAnimation.frames.size(); i++) {
            // Blend the current animation's frames with those of the additive animations
            currentAnimation.frames[i] += additiveAnimations[i].frames[i] * additiveAnimations[i].weight;
        }
    }
};
