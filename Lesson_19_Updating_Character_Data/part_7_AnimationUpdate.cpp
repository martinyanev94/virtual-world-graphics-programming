struct AnimationData {
    std::vector<AnimationFrame> frames;
    int currentFrame;
    float frameTime; // Duration for each frame
};

// Example to update the animation frame based on the elapsed time
void updateAnimation(AnimationData& animationData, float deltaTime) {
    animationData.frameTime -= deltaTime;
    if (animationData.frameTime <= 0.0f) {
        animationData.currentFrame = (animationData.currentFrame + 1) % animationData.frames.size();
        animationData.frameTime = 1.0f / animationData.frames.size(); // Reset time for next frame
    }
}
