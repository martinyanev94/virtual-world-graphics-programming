CharacterData currentCharacter;
CharacterData nextCharacter;

void SynchronizeCharacterData() {
    // Swap pointers
    std::swap(currentCharacter, nextCharacter);
}

void Update() {
    // Update nextCharacter while currentCharacter is used for rendering
    nextCharacter.position += glm::vec3(0.0f, -9.8f * deltaTime, 0.0f);
    nextCharacter.animState = GetAnimationState();
}

void Render() {
    // Update the GPU with currentCharacter data
    UpdateCharacterData(currentCharacter, characterShader);
}
