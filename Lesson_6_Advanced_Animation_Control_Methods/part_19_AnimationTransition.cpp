class Character {
public:
    Animation baseAnimation;
    Animation targetAnimation;

    void transitionToNewAnimation(float deltaTime) {
        // Assume we have set the target animation we want to transition to        
        float blendFactor = ... // Calculate blend factor based on time
        
        for (size_t i = 0; i < baseAnimation.keyframes.size(); ++i) {
            Keyframe baseKF = baseAnimation.keyframes[i];
            Keyframe targetKF = targetAnimation.keyframes[i];

            // Blend positions and rotations
            glm::vec3 blendedPosition = glm::mix(baseKF.position, targetKF.position, blendFactor);
            glm::quat blendedRotation = glm::slerp(baseKF.rotation, targetKF.rotation, blendFactor);
            
            // Update animations accordingly
            // Apply blendedPosition and blendedRotation
        }
    }
};
