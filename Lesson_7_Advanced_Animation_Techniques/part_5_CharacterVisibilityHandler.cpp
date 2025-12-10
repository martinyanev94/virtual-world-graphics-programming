class Character {
public:
    bool isVisible(Camera& camera) {
        // Check if the character is within the camera's frustum
        return camera.isInFrustum(position);
    }

    void update(float deltaTime, Camera& camera) {
        if (isVisible(camera)) {
            animationController.update(deltaTime);
            // Update other character states
        }
    }
};
