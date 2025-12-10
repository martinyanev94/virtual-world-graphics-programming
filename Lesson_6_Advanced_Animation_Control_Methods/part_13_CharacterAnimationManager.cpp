class Character {
public:
    Animation baseAnimation;
    std::vector<Animation> additiveAnimations;

    void update(float deltaTime, float runTime) {
        Keyframe baseKeyframe = baseAnimation.getInterpolatedKeyframe(runTime);
        glm::vec3 finalPosition = baseKeyframe.position;
        glm::quat finalRotation = baseKeyframe.rotation;

        for (const auto& additiveAnimation : additiveAnimations) {
            Keyframe additiveKeyframe = additiveAnimation.getInterpolatedKeyframe(runTime);
            finalPosition += additiveKeyframe.position;
            finalRotation *= additiveKeyframe.rotation; // Assume rotational order makes sense here
        }

        applyTransform(finalPosition, finalRotation);
    }

    void addAdditiveAnimation(const Animation& animation) {
        additiveAnimations.push_back(animation);
    }
};
