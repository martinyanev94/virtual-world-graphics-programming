void updateCharacterPerformance(Character& character) {
    // Check current frame rate or performance metrics
    if (isPerformanceDegraded()) {
        character.disableAdditiveAnimations();
    } else {
        character.enableAdditiveAnimations();
    }
}
