class AnimationManager {
public:
    AnimationManager() : isAnimClipNr(0), isAnimPlayTimePos(0.0f), isAnimSpeedFactor(1.0f) {}

    void update(float deltaTime) {
        if (isPlaying) {
            isAnimPlayTimePos += deltaTime * isAnimSpeedFactor; // Apply speed factor
            if (isAnimPlayTimePos >= animationClips[isAnimClipNr].duration) {
                // Loop or stop animation
                isAnimPlayTimePos = 0.0f; // Restart for simplicity
            }
            updateAnimationFrame();
        }
    }

    void setAnimationSpeed(float speed) {
        isAnimSpeedFactor = speed;
    }

private:
    int isAnimClipNr;
    float isAnimPlayTimePos;
    float isAnimSpeedFactor;
    bool isPlaying; // Control whether the animation is playing
    std::vector<AnimationClip> animationClips;

    void updateAnimationFrame() {
        // Logic to update the animation based on isAnimPlayTimePos
    }
};
