struct AdditiveAnimation {
    std::vector<Bone*> affectedBones; // Bones affected by this animation
    glm::mat4 additiveTransform; // The additive transformation

    AdditiveAnimation(const std::vector<Bone*>& bones, const glm::mat4& transform)
        : affectedBones(bones), additiveTransform(transform) {}
};

void ApplyAdditiveAnimation(Bone& rootBone, const AdditiveAnimation& additive) {
    for (Bone* bone : additive.affectedBones) {
        bone->transformation = bone->transformation * additive.additiveTransform; // Apply additive transform
    }
}
