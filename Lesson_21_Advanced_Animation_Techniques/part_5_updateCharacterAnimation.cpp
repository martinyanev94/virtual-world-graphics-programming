void updateCharacterAnimation(Character& character, float walkCycleTime, float expressionBlendWeight) {
    character.skeleton->update(walkCycleTime);

    // Apply morph target based on character's expression status
    MorphTarget smileTarget("Smile", getSmileVertices());
    auto newVertices = blendMorph(character.mesh->baseVertices, smileTarget, expressionBlendWeight);

    // Update mesh with new vertex positions
    character.mesh->updateVertices(newVertices);
}
