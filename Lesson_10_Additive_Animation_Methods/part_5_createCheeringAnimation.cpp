void createCheeringAnimation(Bone& armBone) {
    AnimationClip cheeringAnimation;

    // Define keyframes for cheering motion
    cheeringAnimation.addKeyframe(0.0f, glm::vec3(0.0f, 0.0f, 0.0f)); // Rest position
    cheeringAnimation.addKeyframe(0.5f, glm::vec3(0.0f, 1.0f, 0.0f)); // Raise arm
    cheeringAnimation.addKeyframe(1.0f, glm::vec3(0.0f, 0.0f, 0.0f)); // Return to rest

    armBone.setAdditiveAnimation(cheeringAnimation);
}
