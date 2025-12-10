struct Bone {
    glm::mat4 offset; // The transformation matrix for the bone
    std::vector<int> childBones; // Indices of child bones
    int parentBone; // The index of the parent bone
};
void calculateBoneTransformations(int boneIndex, glm::mat4 parentTransform) {
    Bone& bone = bones[boneIndex];
    glm::mat4 globalTransformation = parentTransform * bone.offset;

    for (int childIndex : bone.childBones) {
        calculateBoneTransformations(childIndex, globalTransformation); // Recursive call for children
    }

    // Store the global transformation for later use in rendering
    boneTransformations[boneIndex] = globalTransformation;
}
