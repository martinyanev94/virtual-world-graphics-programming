class Character {
public:
    Animation baseAnimation;
    Animation additiveAnimation;

    void update(float deltaTime, float runTime) {
        // Update the base animation
        Keyframe baseKeyframe = baseAnimation.getInterpolatedKeyframe(runTime);
        
        // Update additive animation (assuming it's for arms)
        Keyframe additiveKeyframe = additiveAnimation.getInterpolatedKeyframe(runTime);

        // Combine the two keyframes
        glm::vec3 finalPosition = baseKeyframe.position + additiveKeyframe.position;
        glm::quat finalRotation = baseKeyframe.rotation * additiveKeyframe.rotation;

        // Apply finalPosition and finalRotation to render the character
        applyTransform(finalPosition, finalRotation);
    }

    void applyTransform(const glm::vec3& position, const glm::quat& rotation) {
        // Here apply the transformations to the character model
        // This involves updating buffers or sending data to the GPU
        std::cout << "Applying position: " << position.x << ", " << position.y << ", " << position.z << std::endl;
    }
};
