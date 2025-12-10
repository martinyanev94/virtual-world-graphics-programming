class AnimationManager {
public:
    AnimationManager() : isAnimClipNr(0) {}

    void setAnimationClip(int clipNumber) {
        if (clipNumber >= 0 && clipNumber < animationClips.size()) {
            isAnimClipNr = clipNumber;
            playAnimation(animationClips[isAnimClipNr]);
        }
    }

private:
    int isAnimClipNr;
    std::vector<AnimationClip> animationClips;

    void playAnimation(const AnimationClip& clip) {
        // Logic to play the specific animation clip
    }
};
