void updateCharacter(float deltaTime, InputState input) {
    characterSkeleton.updateSkeleton(deltaTime);

    if (input.isWalking) {
        walkAnimator.updateMorphs(deltaTime);
    }

    if (input.isTalking) {
        talkAnimator.blendAdditive();
    }

    characterMesh.render(characterSkeleton.globalTransform);
}
