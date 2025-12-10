float easeInOut(float t) {
    return t < 0.5 ? 2 * t * t : -1 + (4 - 2 * t) * t;
}
// Usage in animation updates:
float currentTime = getCurrentAnimationTime();
float progress = currentTime / totalAnimationTime;
float easedProgress = easeInOut(progress);
