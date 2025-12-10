enum class AnimationState {
    Idle,
    Walking,
    Running,
    Jumping
};

class CharacterAnimator {
public:
    AnimationState currentState;

    CharacterAnimator() : currentState(AnimationState::Idle) {}

    void changeState(AnimationState newState) {
        // Transition logic can be added here
        currentState = newState;
    }

    void update(float deltaTime) {
        switch (currentState) {
            case AnimationState::Idle:
                // perform idle animation
                break;
            case AnimationState::Walking:
                // perform walking animation
                break;
            case AnimationState::Running:
                // perform running animation
                break;
            case AnimationState::Jumping:
                // perform jumping animation
                break;
        }
    }
};
