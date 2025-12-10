float lerp(float start, float end, float t) {
    return start + (end - start) * t;
}

void updateAnimationBlend(Animation& current, Animation& target, float deltaTime) {
    float blendSpeed = 5.0f; // Define how fast we want to blend
    float newWeight = lerp(current.weight, target.weight, blendSpeed * deltaTime);
    
    // Update current animation with the newly calculated weight
    current.weight = newWeight;
}
