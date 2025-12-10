bool isBoneVisible(const Bone& bone) {
    // Placeholder for visibility checking logic (e.g., based on frustum)
    return true; // Assuming all bones are visible for this example
}

void update(float deltaTime) {
    for (size_t i = 0; i < bones.size(); ++i) {
        if (isBoneVisible(*bones[i])) {
            cachedTransforms[i] = bones[i]->getFinalTransform();
        }
    }
}
