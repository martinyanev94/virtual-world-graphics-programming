void handleInput() {
    if (keyPressed('W')) {
        animationManager.setAnimationClip(1); // Walking animation
        animationManager.setAnimationSpeed(1.0f); // Normal speed
    }
    else if (keyPressed('R')) {
        animationManager.setAnimationClip(2); // Running animation
        animationManager.setAnimationSpeed(2.0f); // Faster speed
    }
    else {
        animationManager.setAnimationClip(0); // Idle animation
        animationManager.setAnimationSpeed(1.0f); // Normal speed
    }
}
