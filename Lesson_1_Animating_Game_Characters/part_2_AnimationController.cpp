enum AnimationState { IDLE, WALKING, JUMPING };

class Animation {
public:
    AnimationState state;

    Animation() : state(IDLE) {}

    void updateAnimation(float deltaTime) {
        switch (state) {
            case IDLE:
                // Update idle animation frame logic
                break;
            case WALKING:
                // Update walking animation frame logic
                break;
            case JUMPING:
                // Update jumping animation frame logic
                break;
        }
    }
};

// Example usage:
Animation myAnimation;
myAnimation.state = WALKING; // Update state based on character input
