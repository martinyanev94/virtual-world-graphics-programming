struct FacialAnimation {
    GLuint id; // The ID of the facial animation
    float weight; // The weight of the facial expression

    FacialAnimation(GLuint animationId, float blendWeight)
        : id(animationId), weight(blendWeight) {}
};

void updateFacialExpression(Character& character, FacialAnimation& faceAnim) {
    // Suppose we have a method to blend facial animations based on weight
    character.morphTargetSystem.blend(faceAnim.id, faceAnim.weight);
}
