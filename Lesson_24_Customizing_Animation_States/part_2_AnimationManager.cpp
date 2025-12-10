class AnimationManager {
public:
    AnimationManager() : isAnimClipNr(0), isAnimPlayTimePos(0.0f) {}

    void update(float deltaTime) {
        if (isPlaying) {
            isAnimPlayTimePos += deltaTime;
            if (isAnimPlayTimePos >= animationClips[isAnimClipNr].duration) {
                // Loop or stop animation
                isAnimPlayTimePos = 0.0f; // Restart for simplicity
            }
            // Update the animation frame based on play time position
            updateAnimationFrame();
        }
    }

    void setAnimationClip(int clipNumber) {
        if (clipNumber >= 0 && clipNumber < animationClips.size()) {
            isAnimClipNr = clipNumber;
            isAnimPlayTimePos = 0.0f; // Reset play position
            playAnimation(animationClips[isAnimClipNr]);
        }
    }

private:
    int isAnimClipNr;
    float isAnimPlayTimePos;
    bool isPlaying; // Control whether the animation is playing
    std::vector<AnimationClip> animationClips;

    void updateAnimationFrame() {
        // Logic to update the animation based on isAnimPlayTimePos
    }
};
