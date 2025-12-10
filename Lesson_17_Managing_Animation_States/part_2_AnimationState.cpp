struct AnimationState {
    AnimationData* animationData;
    float currentTime;
    bool isActive;
    
    AnimationState(AnimationData* data) 
        : animationData(data), currentTime(0.0f), isActive(false) {}

    void update(float deltaTime) {
        if (isActive) {
            currentTime += deltaTime * animationData->speed;
            if (currentTime >= animationData->length) {
                currentTime = 0.0f;  // Loop the animation
            }
        }
    }
};
